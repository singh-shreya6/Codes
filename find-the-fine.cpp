#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,date;
	    cin>>n>>date;
	    ll cars[n],penalty[n];
	    for(ll i=0;i<n;i++)
	    cin>>cars[i];
	    ll s=0;
	    for(ll i=0;i<n;i++)
	    {
	    cin>>penalty[i];
	    if(date&1 && cars[i]%2==0)
	    s+=penalty[i];
	    if(date%2==0 && cars[i]&1)
	    s+=penalty[i];
	    }
	    cout<<s<<endl;
	}
	return 0;
}
