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
	    ll b[n];
	    for(ll i=0;i<n;i++)
	    b[i]=a[i]*a[i];
	    sort(b,b+n);
	    ll flag=0;
	    for(ll i=(n-1);i>=0;i--)
	    {
	       ll l=0,r=(i-1);
	       while(l<r)
	       {
	           if(b[l]+b[r]==b[i])
	           {
	               cout<<"Yes"<<endl;
	               flag=1;
	               break;
	           }
	           if(b[l]+b[r]<b[i])
	           {
	               l++;
	           }
	           else
	            r--;
	       }
	       if(flag==1)
	       break;
	    }
	    if(flag==0)
	    cout<<"No"<<endl;
	}
	return 0;
}
