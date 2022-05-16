/*
https://leetcode.com/problems/longest-repeating-character-replacement
*/
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int l = 0, r = 0;
        map<char, int> mp;
        int ans = 0, mxf = 0;
        while (l <= r && r < n){
            mp[s[r]]++;
            auto it = mp.begin();
            while(it != mp.end()){
                mxf = max(mxf, it->second);
                it++;
            }
            while(r-l+1 - mxf > k){
                mp[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
       
    }
};
