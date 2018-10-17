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
        ll a[n][m];
        ll v[n*m];
        for(ll i=0;i<(n*m);i++)
        {
            cin>>v[i];
        }
        ll k=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
            a[i][j]=v[k];
            k++;
            }
        }
        ll c=0,count=INT_MIN;
        bool visited[n][m];
        memset(visited,false,sizeof(visited));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(a[i][j]==1 && !visited[i][j])
                {
                    c=0;
                     //cout<<c<<endl;
                   stack<pair<ll,ll> > s;
                   s.push(mkp(i,j));
                   visited[i][j]=true;
                   while(!s.empty())
                   {
                       ll u=s.top().first;
                       ll v=s.top().second;
                       //cout<<u<<" "<<v<<endl;
                       c++;
                       //cout<<c<<endl;
                       s.pop();
                       if(u+1<n && v+1<m && a[u+1][v+1]==1 && !visited[u+1][v+1])
                       {
                        s.push(mkp(u+1,v+1));
                        visited[u+1][v+1]=true;
                       }
                        if(u-1>=0 && v-1>=0 &&a[u-1][v-1]==1 && !visited[u-1][v-1])
                        {
                        s.push(mkp(u-1,v-1));
                            visited[u-1][v-1]=true;
                        }
                        if(u-1>=0 && v+1<m && a[u-1][v+1]==1 && !visited[u-1][v+1])
                        {
                        s.push(mkp(u-1,v+1));
                            visited[u-1][v+1]=true;
                        }
                        if(u+1<n && v-1>=0 && a[u+1][v-1]==1 && !visited[u+1][v-1])
                        {
                        s.push(mkp(u+1,v-1));
                            visited[u+1][v-1]=true;
                        }
                        if(u-1>=0 && a[u-1][v]==1 && !visited[u-1][v])
                        {
                        s.push(mkp(u-1,v));
                            visited[u-1][v]=true;
                        }
                        if(u+1<n && a[u+1][v]==1 && !visited[u+1][v])
                        {
                        s.push(mkp(u+1,v));
                            visited[u+1][v]=true;
                        }
                        if(v+1<m && a[u][v+1]==1 && !visited[u][v+1]){
                        s.push(mkp(u,v+1));
                            visited[u][v+1]=true;
                        }
                        if(v-1>=0 && a[u][v-1]==1 && !visited[u][v-1]){
                        s.push(mkp(u,v-1));
                            visited[u][v-1]=true;
                        }
                   }
                count=max(count,c);
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
