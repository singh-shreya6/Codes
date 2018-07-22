#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    ll flag=0;
	    for(ll i=0,j=(n-1);i<n/2;i++,j--)
	    {
	        if(s[i]!=s[j])
	        {
	            cout<<"No"<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    cout<<"Yes"<<endl;
	}
	return 0;
}
