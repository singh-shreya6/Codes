/*
https://leetcode.com/problems/longest-palindrome
*/
class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        map<char, int> mp;
        for(int i = 0; i< n;i++){
            mp[s[i]]++;
        }
        auto it = mp.begin();
        int l = 0, flag = 0;
        while(it!= mp.end()){
            if(it->second % 2 == 0) {
                l+=it->second;
            } else {
                if(flag==0){
                    l++;
                    flag=1;
               }
               l+=it->second-1;
            }
            ++it;
        }
        return l;
    }
};
