#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	  ll n;
	  cin>>n;
	  vector<ll> a(n);
	  for(ll i=0;i<n;i++)
	  cin>>a[i];
	  ll k;
	  cin>>k;
	  ll flag=find(a.begin(),a.end(),k)-a.begin();
	  if(flag!=n)
	  {
	  ll index=lower_bound(a.begin(),a.end(),k)-a.begin();
	  ll index1=upper_bound(a.begin(),a.end(),k)-a.begin();
	  cout<<index<<" "<<index1-1<<endl;
	  }
	  else
	  cout<<-1<<endl;
	}
	return 0;
}
