/*
https://leetcode.com/problems/longest-substring-without-repeating-characters
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0){
            return 0;
        }
        int l = 0, r = 1;
        map<char, int> mp;
        mp[s[l]] = 0;
        int ans = 0;
        while(l < r && r  < n){
            if(mp.find(s[r]) == mp.end()) {
                mp[s[r]] = r;
            } else {
                ans = max(ans, r-l);
                while(l < mp[s[r]]+1){
                    mp.erase(s[l]);
                    l++;
                }
                mp[s[r]] = r;
            }
            r++;
        }
        ans = max(ans, r-l);
        return ans;
    }
};
