/*
https://leetcode.com/problems/valid-palindrome/
*/
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int l = 0, r = n-1;
        while(l<r) {
            if (!((s[l] >= 'A' && s[l] <= 'Z') || (s[l] >= 'a' && s[l] <= 'z') || (s[l] >= '0' && s[l] <= '9'))){
                l++;
            } else if (!((s[r] >= 'A' && s[r] <= 'Z') || (s[r] >= 'a' && s[r] <= 'z') || (s[r] >= '0' && s[r] <= '9'))){
                r--;
            } else if(tolower(s[l]) == tolower(s[r])) {
                l++;
                r--;
            } else {
                return false;
            }
        }
        return true;
        
    }
};
