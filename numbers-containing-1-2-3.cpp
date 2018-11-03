#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back

int main()
{
    faster;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        vector<ll> v;
        ll c=0;
        string str="";
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            str=to_string(a[i]);
            if(str.find('0')==string::npos && (str.find('4')==string::npos) && (str.find('5')==string::npos)&&(str.find('6')==string::npos)&&(str.find('7')==string::npos)&&(str.find('8')==string::npos)&& (str.find('9')==string::npos))
            {
                c=1;
                v.pb(a[i]);
            }
        }
        if(c!=0){
            sort(v.begin(),v.end());
            for(ll i=0;i<v.size();i++)
            cout<<v[i]<<" ";
            cout<<"\n";            
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}
