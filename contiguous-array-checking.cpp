#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back

int main()
{
    faster;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        map<ll,ll>::iterator it;
        ll flag=0;
        ll prev=-1;
        for(it=mp.begin();it!=mp.end();++it)
        {
            if(prev!=-1 && it->first-prev!=1)
            {
              flag=1;
              break;
            }
            prev=it->first; 
        }
        if(flag==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;        
    }
    return 0;
}
