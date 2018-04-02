https://www.codechef.com/problems/ZOZ

#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef unsigned long long int ll;

int main()
{
    faster
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll s=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        ll count=0;
        for(ll i=0;i<n;i++)
        {
          if((s-a[i])<(a[i]+k))
              count++;
        }
        cout<<count<<endl;
    }
return 0;
}
