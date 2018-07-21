#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool comp(string i, string j)
{
    return i.length()<j.length();
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<string> a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end(),comp);
        ll flag=0;
        string str="";
        for(ll i=0;i<a[0].length();i++)
        {
            char s=a[0][i];
            for(ll j=0;j<n;j++)
            {
                if(a[j][i]!=s)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            str+=a[0][i];
            if(flag==1)
                break;
        }
        if(str=="")
            cout<<"-1"<<endl;
        else
            cout<<str<<endl;
    }  
    return 0;
}
