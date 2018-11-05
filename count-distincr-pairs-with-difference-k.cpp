#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
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
	    mp[a[i]]=i;
	    }
	    ll k;
	    cin>>k;
	    ll c=0;
	    map<pair<ll,ll> ,ll> m;
	    for(ll i=0;i<n;i++)
	    {
	        if(mp.find(a[i]+k)!=mp.end() && mp[a[i]+k]!=i && m.find({a[i],a[i]+k})==m.end())
	        {
	        m[{a[i],a[i]+k}]=1;
	        c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
