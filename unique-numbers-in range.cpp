#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll m,n;
	    cin>>m>>n;
	    for(ll i=m;i<=n;i++)
	    {
	        string s=to_string(i);
	        map<char,ll> mp;
	        for(ll j=0;j<s.length();j++)
	        mp[s[j]]++;
	        map<char,ll>::iterator it;
	        ll flag=0;
	        for(it=mp.begin();it!=mp.end();it++)
	        {
	            if(it->second>1)
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
