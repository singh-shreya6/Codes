// Rotate an array by d elements
/* E.g Input:
        n=5, d=2 a[]={1, 2, 3, 4, 5}
      Output:
      {3, 4, 5, 1, 2}
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
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
        
