#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void convert(ll n)
{
    string s="";
    while(n>0)
    {
        ll a=n%2;
        s+=to_string(a);
        n=n/2;
    }
    reverse(s.begin(),s.end());
    ll c=14-s.length();
    while(c!=0)
    {
        cout<<0;
        c--;
    }
    cout<<s<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        convert(n);
    }
	return 0;
}
