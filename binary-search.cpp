#include<bits/stdc++.h>
using namespace std;

int bin_search(int A[], int left, int right, int k)
{
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(A[mid]==k)
        {
            return mid;
        }
        if(A[mid]<k)
        left=mid+1;
        else
        right=right-1;
    }
   return -1; 
}


int main()
{
int n;
cin>>n;
int A[n];
for(int i=0;i<n;i++)
cin>>A[i];
int k;
cin>>k;
int ans=bin_search(A,0,n-1,k);
cout<<ans<<endl;
}
