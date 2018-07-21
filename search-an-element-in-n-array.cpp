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
	    for(ll i=0;i<n;i++)
	    cin>>a[i];
	    ll x;
	    cin>>x;
	    ll flag=0;
	    for(ll i=0;i<n;i++)
	    {
	        if(a[i]==x)
	        {
	            cout<<i<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    cout<<"-1"<<endl;
	}
	return 0;
}
