/*

Leetcode Problem Link : 
https://leetcode.com/problems/reverse-bits/

*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       string s = convertDecimalToBinary(n);
       reverse(s.begin(), s.end());
       uint32_t num = convertBinaryToDecimal(s); 
       return num;
    }
    
    string convertDecimalToBinary(uint32_t n){
        string s = "";
        while(n>0){
        if(n%2){
            s = '1'+ s;
        } else{
            s = '0' + s;
        }
        n/=2;
        }
        while (s.length()<32){
            s= '0' + s;
        }
        return s;
    }
    
    uint32_t convertBinaryToDecimal(string s){
        uint32_t num = 0;
        for(int i=0;i<32;i++){
            if(s[i] == '1'){
                num+=pow(2,31-i);   
            }         
        }
        return num;
    }
};
