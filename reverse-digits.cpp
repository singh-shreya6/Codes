#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void rev(ll n,ll fl)
{ 
    if(n==0)
        return;
      ll a=n%10;
      if(fl==0 && a!=0)
          fl=1;
        if(fl==1)
            cout<<a;
      rev(n/10,fl);
}

int main()
 {
    ll t;
    cin>>t;
    while(t--)
    {
         ll n;
         cin>>n;
         rev(n,0);
         cout<<endl;
    }
    return 0;
}
