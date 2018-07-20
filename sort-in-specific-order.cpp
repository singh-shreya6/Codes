// GeeksforGeeks Sudo Placement Q 9
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
	    for(ll i=0;i<n;i++)
	    {
	        if(a[i]&1)
	        a[i]=a[i]*-1;
	    }
	    sort(a,a+n);
	    for(ll i=0;i<n;i++)
	    {
	        if(a[i]&1)
	        cout<<a[i]*-1<<" ";
	        else
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
