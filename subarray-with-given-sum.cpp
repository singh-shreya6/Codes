// GeeksforGeeks Sudo placement Q 17
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        ll start=0;
        ll s=a[0];
        ll flag=0;
        for(ll i=1;i<=n;i++)
        {
            while(s>k && start<i-1)
            {
                s=s-a[start];
                start++;
            }
            if(s==k)
            {
                cout<<start+1<<" "<<i<<endl;
                flag=1;
                break;
            }
            s+=a[i];  
        }  
        if(flag==0)
            cout<<"-1"<<endl;
    }
    return 0;
}
