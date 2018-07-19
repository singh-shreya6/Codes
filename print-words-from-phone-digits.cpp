#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<int,string> m;

void words(string s,ll k,ll a[], ll n)
{
    if(k==n)
        cout<<s<<" ";
    for(ll i=0;i<m[a[k]].length();i++)
    {
        words(s+m[a[k]][i],k+1,a,n);
    }
}



int main()
{
    ll t;
    cin>>t;
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        string s="";
        words(s,0,a,n);
        cout<<endl;
    }
    return 0;
}
