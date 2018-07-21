#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        ll mx=a[n-1],smax=INT_MIN;
        for(ll i=(n-2);i>=0;i--)
        {
         if(a[i]!=mx)
         {
             smax=a[i];
             break;
         }
        }
        cout<<smax<<endl;
    }
	return 0;
}
