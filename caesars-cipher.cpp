#include <bits/stdc++.h> 
using namespace std; 
  
string encrypt(string text, char s) 
{ 
    string result = ""; 
    if(s>=65 && s<=90)
    s=s-65+1;
    else
    s=s-97+1;
    s=(int)s;
    for (int i=0;i<text.length();i++) 
    { 
    	if(text[i]==' ')
    	 result+=" ";          
        else if (text[i]>=65 && text[i]<=90) 
            result += char(int(text[i]+s-65)%26 +65); 
	    else
	        result += char(int(text[i]+s-97)%26 +97); 
    } 
    return result; 
} 

string decrypt(string st, char s) 
{ 
    string re = ""; 
    if(s>=65 && s<=90)
    s=s-65+1;
    else
    s=s-97+1;
    s=(int)s;
    s=26-s;
    for (int i=0;i<st.length();i++) 
    { 
    	if(st[i]==' ')
    	 re+=" ";      
        else if (st[i]>=65 && st[i]<=90) 
            re += char(int(st[i]+(s-65))%26 +65); 
	    else
	        re += char(int(st[i]+(s-97))%26 +97); 
    } 
    return re; 
} 
  
int main() 
{ 
    cout<<"Enter text to encrypt:"<<endl;
    string text;
    getline(cin,text);
    cout<<"Enter key"<<endl;
    char s;
    cin>>s;
    cout << "Plain Text: " << text<<endl; 
    cout << "Key: " << s<<endl; 
    string st=encrypt(text, s);
    cout << "Cipher text: " << st<<endl; 
    string dt=decrypt(st,s);
    cout << "Decrypted text: "<<dt<<endl;
    return 0; 
} 
