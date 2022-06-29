/*
https://leetcode.com/problems/find-pivot-index
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        if(n == 0){
            return ans;
        }
        vector<int> left(n, 0);
        left[0] = nums[0];
        for(int  i = 1; i < n; i++){
            left[i] = left[i-1] + nums[i];
        }
        int s = 0;
        for(int  i = n-1; i >= 0; i--){
            s = s + nums[i];
            if(s == left[i]) {
                ans = i;
            }
        }
        return ans;        
    }
};
