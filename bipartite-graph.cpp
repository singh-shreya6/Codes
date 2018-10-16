#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mkp make_pair
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    for(ll z=1;z<=t;z++)
    {
        cout<<"Scenario #"<<z<<":"<<endl;
        ll n,m;
        cin>>n>>m;
        ll x,y;
        vector<ll> adj[n+1];
        for(ll i=0;i<m;i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        vector<ll> color(n+1,-1);
        ll flag=0;
        for (ll i = 1; i <=n; i++)
        {
        if (color[i] == -1) 
        {
        queue<ll> q;
        q.push(i);
        color[i] = 1; 
            while (!q.empty()) 
            { 
                ll u = q.front(); 
                q.pop();
                for (ll j = 0; j < adj[u].size();j++) 
                { 
                    if (color[adj[u][j]] == -1) 
                    { 
                        color[adj[u][j]] = 1-color[u];
                        q.push(adj[u][j]); 
                    }
                    else if(color[adj[u][j]] == color[u]) 
                    {
                        flag=1;
                        break;
                    }
                } 
            }
            if(flag==1)
            {
                cout<<"Suspicious bugs found!"<<endl;
                break;
            }
         }
        }
            if(flag==0)
                cout<<"No suspicious bugs found!"<<endl;               
    }
    return 0;
}
