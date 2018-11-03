#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mkp make_pair
#define pb push_back
typedef long long int ll;
typedef long double ld;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        ll s=0,sum=0;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
            sum+=b[i];
            mp[b[i]]++;
        }
        ll diff=abs(s-sum);
        ll flag=0;
        for(ll i=0;i<n;i++)
        {
         if(mp.find(diff-a[i])!=mp.end())
         {
             flag=1;
             cout<<1<<endl;
             break;
         }
        }
        if(flag==0)
            cout<<-1<<endl;        
    }
    return 0;
}
