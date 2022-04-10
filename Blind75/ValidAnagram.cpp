/*
https://leetcode.com/problems/valid-anagram/
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if (n != m){
            return false;   
        }
        vector<int> h(26, 0);
        vector<int> g(26, 0);
        for(int i = 0; i< n; i++){
            h[s[i]- 'a']++;
            g[t[i]- 'a']++;
        }
        for (int i = 0; i< 26; i++){
            if(h[i] != g[i]){
                return false;
            }
        }
        return true;
        
    }
};
