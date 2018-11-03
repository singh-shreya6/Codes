#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back

int main()
{
    faster;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll p=a[0];
        for(ll i=1;i<n;i++)
            p=p^(a[i]);
        cout<<p<<endl;        
    }
    return 0;
}
