// GeeksforGeeks Sudo Placement Q 4
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
        vector<ll> s;
        s.push_back(a[n-1]);
        ll mx=a[n-1];
        for(ll i=(n-2);i>=0;i--)
        {
            if(a[i]>mx)
            {
                s.push_back(a[i]);
                mx=a[i];
            }
        }
        for(ll i=(s.size()-1);i>=0;i--)
        cout<<s[i]<<" ";
        cout<<endl;
        }
}
