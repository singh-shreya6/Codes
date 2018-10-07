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
	    ll l=0,r=(n-1);
	    while(l<r)
	    {
	        if(a[l]>a[r])
	        l++;
	        else
	        r--;
	    }
	    if(a[l]>a[r])
	    cout<<a[r]<<endl;
	    else
	    cout<<a[l]<<endl;
	    
	}
	return 0;
}
