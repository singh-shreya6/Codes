#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void chk(int n,int k,int fl)
{
    cout<<n<<" ";
    if(n==k && fl==1)
        return;
    if(fl==0)
    {
       if(n>0)
            chk(n-5,k,0);
        else
            chk(n+5,k,1);
    }
    else
        chk(n+5,k,1);
}

int main()
 {
    ll t;
    cin>>t;
    while(t--)
    {
         ll n;
         cin>>n;
         chk(n,n,0);
         cout<<endl;
    }
    return 0;
}
