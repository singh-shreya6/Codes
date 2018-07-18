#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,x;
	    cin>>n>>x;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    ll start=0,end=n-1;
	    ll mid;
	    while(start<=end)
	    {
	        mid=(start+end)/2;
	        if(a[mid]>x)
	        {
	            end=mid-1;
	        }
	        else
	            start=mid+1;
	    }
	    ll diff,diff2;
	    diff=abs(a[start]-x);
	    diff2=abs(a[end]-x);
	    if(diff<=diff2)
	    cout<<a[start]<<endl;
	    else
	    cout<<a[end]<<endl;
	    
	    
	}
	return 0;
}
