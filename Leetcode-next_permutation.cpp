/*
* Problem link : https://leetcode.com/problems/next-permutation/
*
*/
class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n = a.size();
        int ind = -1;
        for (int i = n-2; i>=0; i--) {
            if (a[i] > a[i+1]) {
                continue;
            }
            int mx = INT_MAX;
            ind = -1;
            for (int j = i+1; j < n; j++) {
                if (a[j] > a[i] && a[j] < mx) {
                    mx = a[j];
                    ind = j;
                }
            }
            if (ind != -1) {
                swap(a[ind], a[i]);
                ind = i;
                break;
            }
        }
        sort(a.begin() + ind + 1, a.end());
        
    }
};
