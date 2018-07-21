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
        ll b[m];
        for(ll i=0;i<m;i++)
            cin>>b[i];
        ll arr[m]={0};
        for(ll i=0;i<n;i++)
        {
            ll c=0;
            for(ll j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    if(arr[j]<c+1)
                        arr[j]=c+1;
                }
                else if(a[i]>b[j])
                {
                   if(arr[j]>c)
                       c=arr[j];
                }  
            }  
        }
       ll mx=LLONG_MIN;
       for(ll i=0;i<m;i++)
           mx=max(arr[i],mx);
        cout<<mx<<endl;
    }
    return 0;
}
