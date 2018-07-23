#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int path(int i, int j,int m,int n)
{
    if(i==m-1 && j==n-1)
        return 1;
    if(i<m && j<n)
        return path(i,j+1,m,n)+path(i+1,j,m,n);
return 0;
}

int main()
 {
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>m>>n;
        cout<<path(0,0,m,n);
        cout<<endl;
    }
    return 0;
}
