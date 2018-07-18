#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        ll m;
        cin>>m;
        sort(a,a+n);
        ll mn=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            if((a[i+m-1]-a[i])<mn && (i+m-1)<n)
            mn=a[i+m-1]-a[i];
        }
        cout<<mn<<endl;
    }
}
