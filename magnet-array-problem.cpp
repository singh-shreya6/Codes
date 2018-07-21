#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

ld getforce(ld a[],ld mid,ld n)
{
    ld f=0;
    for(ll i=0;i<n;i++)
    {
        if(i<=mid)
            f=f-(1/(mid-a[i]));
        else
            f=f+(1/(a[i]-mid));
    }
    return f;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ld a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<n-1;i++)
        {
            ld left=a[i],right=a[i+1];
            while(left<=right)
            {
               ld mid=(left+right)/2;
               ld f=getforce(a,mid,n);
              if(abs(f)<0.0000000000001)
              {
                  cout<<fixed<<setprecision(2)<<mid<<" ";
                  break;
              }  
             else if(f>0.0000000000001)
                 right=mid;
             else
                 left=mid;
            }
        }
        cout<<endl;
    }  
    return 0;
}
