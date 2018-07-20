// GeeksforGeeks Sudo Placement Q 16
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
        ll sumforward[n];
        sumforward[0]=0;
        for(ll i=1;i<n;i++)
            sumforward[i]=sumforward[i-1]+a[i-1];
        ll sumbackward[n];
        sumbackward[n-1]=0;
        for(ll i=n-2;i>=0;i--)
            sumbackward[i]=sumbackward[i+1]+a[i+1];
        ll flag=0;
        for(ll i=0;i<n;i++)
        {
            //cout<<sumforward[i]<<" "<<sumbackward[i]<<endl;
            if(sumforward[i]==sumbackward[i])
            {
                cout<<(i+1)<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"-1"<<endl;   
    }
    return 0;
}
