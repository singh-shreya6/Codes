#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    faster;
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
        ll flag=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
