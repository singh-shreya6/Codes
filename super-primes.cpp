#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bitset<10000007> prime;
vector<ll> s;
void Sieve()
{
    prime[0]=1;
    prime[1]=1;
   for(ll i=2;i*i<=10000007;i++)
   {
       if(prime[i]==0)
       {
           for(ll j=i*2;j<=10000007;j+=i)
               prime[j]=1;
       }
   }
   for(ll i=2;i<=10000007;i++)
   {
       if(prime[i]==0 && prime[i-2]==0)
       s.push_back(i);
   }
}

int main()
 {
    ll t;
    cin>>t;
    Sieve();
    while(t--)
    {
         ll n;
         cin>>n;
         ll c=upper_bound(s.begin(),s.end(),n)-s.begin();
         cout<<c<<endl;
    }
    return 0;
}
