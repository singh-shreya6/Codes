#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll h[26]={0};
        for(ll i=0;i<s.length();i++)
            h[s[i]-'a']++;
        ll n=0;
         for(ll i=0;i<26;i++)
         {
             if(h[i]!=0)
                 n++;
         }
        ll c=0,start=0;
        ll ans=INT_MAX;
        ll hash[26]={0};
        for(ll i=0;i<s.length();i++)
        {
            hash[s[i]-'a']++;
            if(hash[s[i]-'a']==1)
                c++;
        if(c==n)
        {
          while(hash[s[start]-'a']>1)
          {
              if (hash[s[start]-'a'] > 1)
              hash[s[start]-'a']--;
              start++;
          }
            ans=min(ans,(i-start+1));
        }
        }
        cout<<ans<<endl;
    }
}
