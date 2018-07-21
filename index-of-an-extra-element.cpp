#include<bits/stdc++.h>
using namespace std;

int findExtra(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            return i;
        }
    }
}

int main()
{
int n;
cin>>n;
int a[n],b[n-1];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n-1;i++)
cin>>b[i];
int ans=findExtra(a,b,n);
cout<<ans<<endl;
}
