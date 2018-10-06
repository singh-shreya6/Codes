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
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        ll p=0;
        for(ll i=0,j=(n-1);i<n;i++,j--)
          p=p+(a[i]*b[j]);  
        cout<<p<<endl;
    }
	return 0;
}
