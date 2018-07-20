// GeeksforGeeks Sudo Placement Q 19
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
        ll c=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<k)
            {
                string s=to_string(a[i]);
                ll flag=0;
                for(ll j=0;j<s.length()-1;j++)
                {
                    if(abs(s[j+1]-s[j])!=1)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    cout<<a[i]<<" ";
                    c++;
                }
            }
        }
        if(c==0)
            cout<<"-1";
        cout<<endl;
    }  
    return 0;
}
