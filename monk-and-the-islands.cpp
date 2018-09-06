//Question link: https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll u,v;
        vector<ll> adj[n+1];
        for(ll i=0;i<m;i++)
        {
          cin>>u>>v;  
          adj[u].push_back(v);
          adj[v].push_back(u);
        }
        queue<ll> q;
        bool visited[n+1]={0};
        int dist[n+1]={0};
        q.push(1);
        visited[1]=true;
        dist[1]=0;
        while(!q.empty())
        {
            int p=q.front();
            q.pop();
            for(ll i=0;i<adj[p].size();i++)
            {
                ll x=adj[p][i];
                if(!visited[x])
                {
                    q.push(x);
                    dist[x]=dist[p]+1;
                    visited[x]=true;
                }
            }
        }
        cout<<dist[n]<<endl;
    }
}
