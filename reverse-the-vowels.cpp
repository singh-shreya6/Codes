#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

int main()
{
    ll t;
    cin>>t;
        set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
    while(t--)
    {
     string s;
        cin>>s;
        vector<char> v;
        for(ll i=0;i<s.length();i++)
        {
            if(st.find(s[i])!=st.end())
                v.push_back(s[i]);
        }
        ll k=v.size()-1;
         for(ll i=0;i<s.length();i++)
        {
            if(st.find(s[i])!=st.end())
            {
                cout<<v[k];
                k--;
            }
             else
                 cout<<s[i];
         }
        cout<<endl;
    }
}
