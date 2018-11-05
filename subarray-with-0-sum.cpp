#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
    	    for(ll i=0;i<n;i++)
    	        cin>>a[i];
    	   ll sum=0;
    	   map<ll,vector<ll> > mp;
    	   ll c=0;
	    for(ll i=0;i<n;i++)
	    {
	        sum+=a[i];
	        if(sum==0)
	        c++;
	        if(mp.find(sum)!=mp.end())
	           {
	               vector<ll> b=mp[sum];
	               for(ll j=0;j<b.size();j++)
	               c++;
	           }
	         mp[sum].pb(i);
	    }
	    cout<<c<<endl;
	}
	return 0;
}
