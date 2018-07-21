#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    ll c=0;
	    for(ll i=0;i<n;i++)
	    {
	    cin>>a[i];
	    if(a[i]==k)
	        c++;
	    }
	    if(c==0)
	    cout<<-1<<endl;
	    else
	    cout<<c<<endl;
	}
	return 0;
}
