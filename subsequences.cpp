//Generating subsequences
#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int ll;
typedef long double ld;

int main()
{
    faster
    int a[]={1,2,3};
    int n=3;
    for(int i=0;i<(1<<n);i++)   //1<<N means pow(2,n)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))           //1<<j means pow(2,j)
                cout<<a[j];
            
        }
        cout<<endl;
    }
   return 0;
}
