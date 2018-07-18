https://www.codechef.com/problems/CO92SUBW

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
        ll time=0;
        ll i;
        ll k=1;
        for(i=1;i<=n;i+=k)
        {
             time+=1;
             k++;
        }
        ll nextStation=i;
        ll d=min(nextStation-n+1,n-(nextStation-k));
        ll ans=time+d;
        cout<<ans<<endl;
    }
return 0;
}
