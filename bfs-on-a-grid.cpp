#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mkp make_pair

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n+1][m+1];
        ll v[(n*m)+1];
        for(ll i=1;i<=(n*m);i++)
        {
            cin>>v[i];
        }
        ll k=1;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
            a[i][j]=v[k];
            k++;
            }
        }
        ll u1,v1;
        cin>>u1>>v1;
        ll dist[n+1][m+1];
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
                dist[i][j]=INT_MAX;
        }
        queue<pair<ll,ll> > q;
        if(a[1][1]==1)
        {
            q.push(mkp(1,1));
            dist[1][1]=0;
            while(!q.empty())
            {
                ll x=q.front().first;
                ll y=q.front().second;
                q.pop();
                if(y+1<=m && a[x][y+1]==1)
                {
                    if(dist[x][y]+1<dist[x][y+1])
                    {
                        dist[x][y+1]=dist[x][y]+1;
                        q.push(mkp(x,y+1));
                    }
                }
                if(y-1>=1 && a[x][y-1]==1)
                {
                    if(dist[x][y]+1<dist[x][y-1])
                    {
                        dist[x][y-1]=dist[x][y]+1;
                        q.push(mkp(x,y-1));
                    }
                }
                if(x-1>=1 && a[x-1][y]==1)
                {
                    if(dist[x][y]+1<dist[x-1][y])
                    {
                        dist[x-1][y]=dist[x][y]+1;
                        q.push(mkp(x-1,y));
                    }
                }
                if(x+1<=n && a[x+1][y]==1)
                {
                    if(dist[x][y]+1<dist[x+1][y])
                    {
                        dist[x+1][y]=dist[x][y]+1;
                        q.push(mkp(x+1,y));
                    }
                }
            } 
        }
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
                {
                    if(dist[i][j]==INT_MAX)
                    dist[i][j]=-1;
                }
        }
       
        cout<<dist[u1+1][v1+1]<<endl;   
    }
return 0;
}
        
