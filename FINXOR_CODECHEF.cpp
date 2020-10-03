//probloem link :https://www.codechef.com/SEPT20B/problems/FINXOR/
//problem description: Question of CODECHEF september long challenge 2020
//problem code : FINXOR

#include <bits/stdc++.h>
#define scanInt(n) scanf("%d", &n)
using namespace std;

int main() {
 int t;
 scanInt(t);
 vector <int> powersOfTwo(21, 1);
 powersOfTwo[0] = 1;
 for(int i = 1; i < 21; i++)
  powersOfTwo[i] = 2 * powersOfTwo[i - 1];
 
 while(t--) {
  int n;
  scanInt(n);
  
  cout << 1 << " " << powersOfTwo[20] << endl;
  int sum;
  scanInt(sum);
  sum -= (powersOfTwo[20] * n);
  
  int XOR = 0;
  
  if(sum % 2 != 0)
      XOR += 1;
  
  for(int i = 1; i < 20; i++) {
   int userSum = sum + (powersOfTwo[i] * n);
   
   cout << 1 << " " << powersOfTwo[i] << endl;
   
   int judgeSum;
   scanInt(judgeSum);
   
   if(((userSum - judgeSum) / (powersOfTwo[i] * 2)) % 2 != 0)
    XOR += powersOfTwo[i];
     }
  
  cout << 2 << " " << XOR << endl;
  
  int output;
  scanInt(output);
 }
 return 0;
}