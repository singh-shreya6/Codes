#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};
vector<int> g[100001];
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int _size,N;
        cin>>_size>>N;
        Graph *g = new Graph(_size);
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g->addEdge(u,v);
        }
        cout<<g->isCyclic()<<endl;
    }
}

bool dfs(int v,bool visited[],list<int> adj[],int parent)
{
    visited[v]=true;
   list<int>::iterator it;
   for(it=adj[v].begin();it!=adj[v].end();it++)
   {
       if(visited[*it]==false)
       {
       if(dfs(*it,visited,adj,v))
       return true;
       }
       else if(*it!=parent)
       return true;
   }
   return false;
}
bool Graph :: isCyclic()
{
 bool visited[V];
 memset(visited,false,sizeof(visited));
 for(int i=0;i<V;i++)
 {
     if(visited[i]==false)
     {
         if(dfs(i,visited,adj,-1))
         return true;
     }
 }
 return false;
}
