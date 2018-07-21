#include< iostream>
using namespace std;

int peak(int arr[], int n)
{
  for(int i=0;i<n;i++)
  {
      if(i==0)
      {
          if(arr[0]>arr[1])
          return 0;
      }
      else if(i==n-1)
      {
          if(arr[n-1]>arr[n-2])
          return n-1;
      }
      else
      {
          if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
          return i;
      }
      
  }
}

int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int ans=peak(arr,n);
cout<<ans<<endl;
}
return 0;
}
