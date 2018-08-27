#include <bits/stdc++.h>
using namespace std;
#define MAX 1000  
int findIslands(int A[MAX][MAX],int N,int M);
int main() {
	// your code goes here
	int T;
	cin>>T;
	int A[MAX][MAX];
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		memset(A,0,sizeof A);
		for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
		cin>>A[i][j];
		cout<<findIslands(A,N,M)<<endl;
	}
	return 0;
}
void dfs(int i,int j,int A[MAX][MAX],int N,int M,bool visited[MAX][MAX])
{
    if(i>=0 && i<N && j>=0 && j<M)
    {
    if(A[i][j]==1 && !visited[i][j])
    {
        visited[i][j]=true;
        dfs(i-1,j-1,A,N,M,visited);
        dfs(i-1,j,A,N,M,visited);
        dfs(i-1,j+1,A,N,M,visited);
        dfs(i,j-1,A,N,M,visited);
        dfs(i,j+1,A,N,M,visited);
        dfs(i+1,j-1,A,N,M,visited);
        dfs(i+1,j,A,N,M,visited);
        dfs(i+1,j+1,A,N,M,visited);
    }
    }
}

int findIslands(int A[MAX][MAX], int N, int M)
{
    bool visited[MAX][MAX];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            visited[i][j]=false;
    }
    int components=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(A[i][j]==1 && visited[i][j]==false)
            {
            dfs(i,j,A,N,M,visited);
            components++;
            }
        }
    }
    return components;
}
