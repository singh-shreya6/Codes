/*

Leetcode Problem Link : 
https://leetcode.com/problems/house-robber-ii/

*/

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        if (n == 2) {
            return max(nums[0], nums[1]);
        }
        int dp[101] = {0};
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n-1; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
        }
        int gp[101] = {0};
        gp[0] = nums[1];
        gp[1] = max(nums[2], nums[1]);
        for (int i = 3; i < n; i++) {
            gp[i-1] = max(gp[i-2], gp[i-3] + nums[i]);
        }
        
        return max(dp[n-2], gp[n-2]);
    }
};
