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
        ll k;
        cin>>k;
        ll b[n];
        for(ll i=0;i<n;i+=k)
        {
            ll start=i,end=(i+k-1);
            if((i+k-1)<n)
            {
            while(end>=start)
            {
                b[start]=a[end];
                b[end]=a[start];
                start++;
                end--;
            }
            }
            else
            {
               ll end=n-1,start=i;
              while(end>=start)
            {
                b[start]=a[end];
                b[end]=a[start];
                start++;
                end--;
            }  
            }
         
        }
        for(ll i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<endl;
    }
}