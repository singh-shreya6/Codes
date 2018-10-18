#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mkp make_pair

int main() 
{
    faster
    ll n,m;
    cin>>n>>m;
    while(n!=0 && m!=0)
    {
        ll c=0,count=0;
        map<ll,ll> mp;
       ll a[n][m];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
                cin>>a[i][j];
        }
        bool visited[n][m];
        memset(visited,false,sizeof(visited));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(a[i][j]==1 && !visited[i][j])
                {
                    c++;
                    count=0;
                    stack<pair<ll,ll> > s;
                    s.push(mkp(i,j));
                    visited[i][j]=true;
                    while(!s.empty())
                    {
                       ll x=s.top().first;
                       ll y=s.top().second;
                        count++;
                        s.pop();
                        if(x+1<n && a[x+1][y]==1 && !visited[x+1][y])
                        {
                            visited[x+1][y]=true;
                            s.push(mkp(x+1,y));
                        }
                        if(x-1>=0 && a[x-1][y]==1 && !visited[x-1][y])
                        {
                            visited[x-1][y]=true;
                            s.push(mkp(x-1,y));
                        }
                        if(y-1>=0 && a[x][y-1]==1 && !visited[x][y-1])
                        {
                            visited[x][y-1]=true;
                            s.push(mkp(x,y-1));
                        }
                        if(y+1<m && a[x][y+1]==1 && !visited[x][y+1])
                        {
                            visited[x][y+1]=true;
                            s.push(mkp(x,y+1));
                        }  
                    }
                    mp[count]++;
                }
            }
        }
    cout<<c<<endl;
    map<ll,ll>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    cin>>n>>m;
    }
    return 0;
}
        
