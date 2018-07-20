// GeeksforGeeks Sudo Placement Q 7
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
	    sort(a,a+n);
	    ll b[n];
	    b[(n-1)/2]=a[0];
	    if(n%2==0)
	        b[n-1]=a[n-1];
	    ll x=1;
	    ll c=1;
	    while(x<n && (x+1)<n)
	    {
	        b[((n-1)/2)+c]=a[x];
	        b[((n-1)/2)-c]=a[x+1];
	        x+=2;
	        c++;
	    }
	    for(ll i=0;i<n;i++)
	    cout<<b[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
