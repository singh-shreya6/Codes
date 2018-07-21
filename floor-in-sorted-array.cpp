#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll in=find(a.begin(),a.end(),k)-a.begin();
        if(in==n)
        {
        if(a[n-1]<k)
        cout<<n-1<<endl;
        else
        {
        ll ind=lower_bound(a.begin(),a.end(),k)-a.begin();
         if(ind==n)
            cout<<"-1"<<endl;
        else
            cout<<ind-1<<endl;
        }
        }
        else
        {   
         cout<<in<<endl;   
        }       
    }
    return 0;
}
