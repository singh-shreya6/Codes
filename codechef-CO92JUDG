https://www.codechef.com/problems/CO92JUDG

#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int ll;

int main()
{
faster
ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll alice[n];
        ll bob[n];
        for(ll i=0;i<n;i++)
        cin>>alice[i];
        for(ll i=0;i<n;i++)
        cin>>bob[i];
        sort(alice,alice+n);
        sort(bob,bob+n);
        ll salice=0,sbob=0;
        for(ll i=0;i<(n-1);i++)
        {
            salice+=(alice[i]);
            sbob+=(bob[i]);
        }
        if(salice>sbob)
        {
            cout<<"Bob"<<endl;
        }
        else if(salice==sbob)
        {
            cout<<"Draw"<<endl;
        }
        else
            cout<<"Alice"<<endl;
    }
return 0;
}
