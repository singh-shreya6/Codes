https://www.codechef.com/problems/FRK

#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int ll;

int main()
{
    faster
    ll t;
    cin>>t;
    ll count=0;
    while(t--)
    {
        string s;
        cin>>s;
        for(ll i=0;i<s.length()-1;i++)
        {
            if((s[i]=='c' && s[i+1]=='h')||(s[i]=='h' && s[i+1]=='e') || (s[i]=='e' && s[i+1]=='f'))
            {
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
return 0;
}
