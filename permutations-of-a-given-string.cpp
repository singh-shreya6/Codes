#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<string> v;

void per(string s,string str)
{
    if(s=="")
        v.push_back(str);
  for(ll i=0;i<s.length();i++)
  {
    per(s.substr(0,i)+s.substr(i+1,s.length()-(i+1)),str+s[i]);
  }
}

int main()
 {
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        v.clear();
        string str;
        per(s,str);
        sort(v.begin(),v.end());
        for(ll i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
