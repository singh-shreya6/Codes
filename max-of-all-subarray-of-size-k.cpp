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
        ll a[n];
        map<ll,ll> m;
        set<ll> s;
        for(ll i=0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<k-1;i++)
        {
        s.insert(a[i]);
        m[a[i]]++;
        }
        for(ll i=k-1;i<n;i++)
        {
          m[a[i-k]]--;
          if(m[a[i-k]]==0)
              s.erase(a[i-k]);        
           m[a[i]]++;
           s.insert(a[i]);
           cout<<*s.rbegin()<<" ";
        }
        cout<<endl;
    }
    return 0;
}
