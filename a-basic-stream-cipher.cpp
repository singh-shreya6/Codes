#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mkp make_pair
#define pb push_back
typedef long long int ll;
typedef long double ld;

int main()
{
	cout<<"Network Security Assignment"<<endl;
	cout<<endl;
    cout<<"Enter String"<<endl;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int n=s.length();
    int key[n];
    cout<<endl;
    cout<<"Key Generation..."<<endl;
    for(int i=0;i<n;i++)
      key[i]=rand()%10;
    
	cout<<endl;
    cout<<"Generated Key"<<endl;
    for(ll i=0;i<n;i++)
        cout<<key[i];
    cout<<endl;
    cout<<endl;
    cout<<"Encrypted String"<<endl;
    string str="";
    char l;
    for(ll i=0;i<n;i++)
    { 
        if(s[i]+key[i]>122)
            l=(s[i]+key[i]-1)-'z'+'a';
        else
            l=(s[i]+key[i]);
     str+=l;  
    }
    cout<<str<<endl;
    cout<<endl;
    cout<<"Now decrypting..."<<endl;
    cout<<endl;
    
    string ss="";
    cout<<"Decrypted string"<<endl;
    char p;
    for(ll i=0;i<n;i++)
    {
        if(str[i]-key[i]<97)
        p=(str[i]-key[i]+1)+'z'-'a';
        else
        p=(str[i]-key[i]);
        ss+=p;
    }
    cout<<ss<<endl;
    return 0;    
}
