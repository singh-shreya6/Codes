#include<bits/stdc++.h>
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
	    for(ll i=0;i<(n-1);i++)
	    {
	        if(a[i]>a[i+1])
	        cout<<a[i+1]<<" ";
	        else
	        cout<<"-1"<<" ";
	    }
	    cout<<"-1"<<endl;
	}
	return 0;
}