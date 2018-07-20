// GeeksforGeeks Sudo Placement Q 11
#include<bits/stdc++.h>
using namespace std;

void countDistinct(int A[], int k, int n)
{
     map<int,int> m;
     map<int,int>::iterator it;
        for(int i=0;i<k;i++)
            m[A[i]]++;
        int c=0;
        for(it=m.begin();it!=m.end();it++)
                c++;
        cout<<c<<" ";
        for(int i=k;i<n;i++)
        {
            m[A[i-k]]--;
            if(m[A[i-k]]==0)
            c--;
            if(m[A[i]]==0)
                c++;
             m[A[i]]++;
             cout<<c<<" ";
        }
    cout<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        countDistinct(A,k,n);
    }
}
