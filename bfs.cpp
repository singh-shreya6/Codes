#include<bits/stdc++.h>
using namespace std;
bool vis[1001];
vector<int> g[1001];
void bfs(int s,vector<int> adj[],bool vis[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        memset(g,0,sizeof g);
        memset(vis,false,sizeof vis);
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
        }
        bfs(1,g,vis);
        cout<<endl;
    }
}
void bfs(int s,vector<int> adj[],bool vis[])
{
    queue<int> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty())
    {
        int p=q.front();
        cout<<p<<" ";
        q.pop();
        for(int i=0;i<adj[p].size();i++)
        {
            if(vis[adj[p][i]]==false)
            {
            q.push(adj[p][i]);
            vis[adj[p][i]]=true;
            }
        }
    }
}
