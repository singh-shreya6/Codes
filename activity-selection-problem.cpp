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
	    ll s[n];
	    ll f[n];
	    for(ll i=0;i<n;i++)
	    cin>>s[i];
	    vector<pair<ll,pair<ll,ll> > > v;
	    for(ll i=0;i<n;i++)
	    {
	    cin>>f[i];
	    v.push_back(make_pair(f[i],make_pair(i+1,s[i])));
	    }
	    sort(v.begin(),v.end());
	    cout<<v[0].second.first<<" ";
	    ll k=0;
	    for(ll i=1;i<n;i++)
	    {
	     if(v[k].first<v[i].second.second)
	     {
	        cout<<v[i].second.first<<" ";
	        k=i;
	     }
	    }
	    cout<<endl;
	}
	return 0;
}
