/*
https://leetcode.com/problems/running-sum-of-1d-array/
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        if(n == 0){
            return ans;
        }
        ans[0] = nums[0];
        for(int i = 1; i < n; i++){
            ans[i] = ans[i-1] + nums[i];
        }
        return ans;
        
    }
};
