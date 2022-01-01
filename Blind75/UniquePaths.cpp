/* https://leetcode.com/problems/unique-paths */

class Solution {
public:
    map<pair<int,int>, int> mp;
    int uniquePaths(int m, int n) {
        if(m==1 && n==1){
            return 1;
        }
        if (m < 1 || n < 1){
            return 0;
        }
        if(mp[pair(m, n)] != 0){
            return mp[pair(m, n)];
        }
        return mp[pair(m,n)] = uniquePaths(m-1, n) + uniquePaths(m, n-1);
    }
};