/*

Leetcode Problem Link : 
https://leetcode.com/problems/insert-interval/

*/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        vector<vector<int> > v;
        int n = a.size();
        if (n == 0) {
            v.push_back(b);
            return v;
        }
        if (b[1] < a[0][0]) {
            v.push_back(b);
            for (int i=0;i<n;i++) {
                v.push_back(a[i]);
            }
            return v;
        }
        if (b[0] > a[n-1][1]) {
            for (int i=0;i<n;i++) {
                v.push_back(a[i]);
            }
            v.push_back(b);
            return v;
        }
        for (int i=0;i<n;i++) {
            if (a[i][0] > b[1]) {
                v.push_back(b);
                while(i<n) {
                    v.push_back(a[i]);
                    i++;
                }
                break;
            } 
            if ((b[0]<=a[i][0] && a[i][0] <= b[1]) || (b[0]>=a[i][0] && b[0]<=a[i][1])) {
                a[i][0] = min(a[i][0], b[0]);
                a[i][1] = max(a[i][1], b[1]);
                int j = i+1;
                while(j<n && a[j][0] <= a[i][1]) {
                    a[i][1] = max(a[i][1], a[j][1]);
                    j++;
                }
                v.push_back(a[i]);
                while(j < n) {
                    v.push_back(a[j]);
                    j++;
                }
                break;
            }
            v.push_back(a[i]);
        }
        return v;
    }
};
