#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
 {
ll t;
cin>>t;
cin.ignore();
    set<char> st;
    st.insert('A');
    st.insert('E');
    st.insert('I');
    st.insert('O');
    st.insert('U');
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
    for(int z=0;z<t;z++){
        string s;
        getline(cin,s);
        ll flag=0;
        for(ll i=0;i<s.length();i++){
                if(st.find(s[i])!=st.end()){
                cout<<s[i];
                flag=1;
            }
            if(s[i]==' ')
            cout<<" ";
        }
        if(flag==0){
            cout<<"No Vowel";
        }

        cout<<endl;
    }
    return 0;
}
