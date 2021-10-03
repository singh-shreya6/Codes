/*
* Problem link : https://leetcode.com/problems/partition-equal-subset-sum/
*
*/

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int x : nums) {
            sum += x;
        }
        if (sum % 2) {
            return false;
        }
        bool dp[n+1][sum+1];
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (j == 0) {
                    dp[i][j] = true;
                } else if (i == 0) {
                    dp[i][j] = false;
                } else if (j - nums[i-1] < 0){
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
                if (j == sum/2 && dp[i][j]) {
                    return true;
                }
            }
        }
        return false;
    }
};
