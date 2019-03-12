#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,4,1,2,7,5,2};
    int n=7;
    int minvalue=*min_element(arr,arr+n);
    int maxvalue=*max_element(arr,arr+n);
    int range=maxvalue-minvalue+1;
    int count[range]={0};
    for(int i=0;i<n;i++)
        count[arr[i]-minvalue]++;
    for(int i=1;i<range;i++)
        count[i]+=count[i-1];
    int ans[n];
    for(int i=0;i<n;i++)
    {
        ans[count[arr[i]-minvalue]-1]=arr[i];
        count[arr[i]-minvalue]--;
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}

