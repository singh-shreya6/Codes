//Cycle in a directed Graph

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int ll;

int main()
{
    faster
    ll n,m;
    cin>>n>>m;
    vector<ll> adj[n];
    ll x,y;
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }
    bool visited[n];
    set<ll> s;
    stack<ll> st;
    for(ll j=0;j<n;j++)
    {
        s.clear();
        st.empty();
        memset(visited,false,sizeof(visited));
        st.push(j);
        visited[j]=true;
        while(!st.empty())
        {
        ll u=st.top();
        s.insert(u);
        st.pop();
        for(ll i=0;i<adj[u].size();i++)
        {
            ll vertex=adj[u][i];
            if(s.find(vertex)!=s.end())
            {
                cout<<"Cycle found"<<endl;
                return 0;
            }
            if(visited[vertex]==false)
            {
                    st.push(vertex);
                    visited[vertex]=true;
            }
        }
        }
    }  
    cout<<"Cycle not found"<<endl;
    return 0;
}
