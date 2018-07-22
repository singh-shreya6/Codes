#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n),b(m);
        for(ll i=0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<m;i++)
        cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll x;
        cin>>x;
        ll l=0,r=(m-1);
        ll diff=INT_MAX;
        ll pi,pj;
        while(l<n && r>=0)
        {
            if(abs(a[l]+b[r]-x)<diff)
            {
                pi=l;
                pj=r;
                diff=abs(a[l]+b[r]-x);
            }
            if(a[l]+b[r]>x)
                r--;
            else
                l++;
        }  
        cout<<a[pi]<<" "<<b[pj]<<endl;
    }
    return 0;
}
