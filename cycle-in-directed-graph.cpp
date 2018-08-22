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
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
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

}
bool dfs(int v, bool visited[],set<int> s,list<int> adj[])
{
    if(visited[v] == false)
    {
        visited[v] = true;
        s.insert(v);
        list<int>::iterator it;
        for(it= adj[v].begin(); it != adj[v].end(); it++)
        {
            if (visited[*it]==false && dfs(*it, visited,s,adj)==true)
                return true;
            else if (s.find(*it)!=s.end())
                return true;
        }
 
    }
    return false;
}

bool Graph :: isCyclic()
{
    bool visited[V];
    set<int> s;
    for(int i = 0; i < V; i++)
    {
        memset(visited,false,sizeof(visited));
        s.clear();
        if (dfs(i, visited,s,adj)==true)
            return true;
    }
    return false;
}
