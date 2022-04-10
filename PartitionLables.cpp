/*
https://leetcode.com/problems/partition-labels/
*/
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        map<char, int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]] = i;
        }
        vector<int> ans;
        int start = 0;
        int end = mp[s[0]];
        for (int i = 1; i < n ; i++){
            if (i <= end)  {
                end = max(end, mp[s[i]]);
            } else {
                ans.push_back(end-start+1);
                start = i;
                end = mp[s[i]];
            }
        }
        ans.push_back(end-start+1);
        return ans;
    }
};
