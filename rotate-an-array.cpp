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
        ll d;
        cin>>d;
        ll b[n];
        for(ll i=0;i<n;i++)
        {
        if((i-d)<0)
        b[(i-d+n)%n]=a[i];
        else
        b[(i-d)%n]=a[i];
        }
        for(ll i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<endl;
        }
}