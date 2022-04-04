class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int l,r;
        set<vector<int>> st;
        for(int i=0;i<n-2;i++){
            l = i+1, r = n-1;
            while(l<r){
            int sum = nums[i]+nums[l]+nums[r];
                if(sum == 0){
                    ans.push_back(nums[i]);
                    ans.push_back(nums[l]);
                    ans.push_back(nums[r]);
                    if(st.find(ans) == st.end()){
                        result.push_back(ans);
                        st.insert(ans);
                    }
                    ans.clear();
                }
                if(sum > 0){
                    r--;    
                }   
                else{
                    l++;
                }
            }
        }
         return result;  
    }
};
