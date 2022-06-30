/*
https://leetcode.com/problems/isomorphic-strings
*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        int m = t.length();
        map<char, int> mps, mpt;
        map<char, char> h;
        for(int i = 0; i< n; i++){
            mps[s[i]]++;
            mpt[t[i]]++;      
            if(h.find(s[i]) != h.end() && h[s[i]] != t[i]){
                return false;
            } else {
                 h[s[i]] = t[i];
            }
        } 
          for(int i = 0; i< n; i++){
            if(mps[s[i]] != mpt[t[i]]){
                return false;
            }    
        } 
        return true;
    }
};
