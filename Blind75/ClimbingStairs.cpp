/* https://leetcode.com/problems/climbing-stairs/ */

class Solution {
public:
    map<int, int> mp;
    int climbStairs(int n) {
        if(n==0) {
            return 1;
        }
        if(n < 0){
            return 0;
        }
        if(mp.find(n) != mp.end()){
            return mp[n];
        }
        return mp[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};