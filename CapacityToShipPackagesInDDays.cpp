/*
https://leetcode.com/problems/capacity-to-ship-packages-within-d-days
*/

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int mn = 0;
        int mx = 0;
        int n = weights.size();
        for(int i = 0;i<n;i++){
            mx+=weights[i];
            mn = max(mn, weights[i]);
        }
        int d = 1;
        int mid;
        while(mn<mx) {
            mid = (mn+mx)/2;
            int s = 0, d = 1;
            for(int i = 0; i < n ;i++){
                s += weights[i];
                if(s > mid) {
                    d++;
                    s = weights[i];
                }
            }
            if(d>days){
                mn = mid+1;
            } else {
                mx = mid;
            }
        }
        return mn;
        
    }
};
