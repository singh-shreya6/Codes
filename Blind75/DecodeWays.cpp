/*
https://leetcode.com/problems/decode-ways/
*/

class Solution {
public:
    int ans = 0;
    map<int, int> mp;
    int numDecodings(string s) {
        int n = s.length();
        return check(s, 0, n);
    }
    
    int check(string s, int i, int n) {
        if(i > n || n == 0){
            return 0;
        }
        if(i == n){
            return 1;
        }
        if(s[i] == '0'){
            return 0;
        }
        if(mp.find(i) != mp.end()){
            return mp[i];
        }
        int ways = 0;
        ways += check(s, i+1, n);
        if(s[i]-'0' <= 2 && ((s[i]-'0')*10 + s[i+1] - '0') < 27) {
            ways += check(s, i+2, n);
        }
        mp[i] = ways;
        return ways;
        
    }
};
