https://www.codechef.com/problems/AFK

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
        ll a,b,c;
        cin>>a>>b>>c;
        ll ss,am,ans;
        ll mid=a+c;
        if(mid%2==0)
        {
            mid=mid/2;
            ans=abs(mid-b);
        }
        else
        {
             ss=(mid+1)/2;
             am=(mid-1)/2;
             ans=min(abs(ss-b),abs(am-b))+1;
        }
        cout<<ans<<endl;
    }
return 0;
}
