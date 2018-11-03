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
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        set<ll> s;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        ll flag=0;
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
            if(s.find(b[i])==s.end())
                flag=1;
        }
        if(flag==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;        
    }
    return 0;
}
