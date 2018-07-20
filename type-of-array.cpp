// GeeksforGeeks Sudo placement Q 18
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
        ll mx=INT_MIN;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(a[i],mx);
        }
        ll c1=0,c2=0;
        for(ll i=0;i<n-1;i++)
        {
           if(a[i]<a[i+1])
               c1++;
            else
               c2++;
        }
        if(c1==0 && c2==(n-1))
            cout<<mx<<" "<<2<<endl;
        if(c1==(n-1) && c2==0)
            cout<<mx<<" "<<1<<endl;
        if(c1==1 && c2==(n-2))
            cout<<mx<<" "<<3<<endl;
        if(c1==(n-2) && c2==1)
            cout<<mx<<" "<<4<<endl;
        
    }
    return 0;
}
