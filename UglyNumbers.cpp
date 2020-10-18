#include<bits/stdc++.h>
using namespace std;

bool isUgly(int num) {
        
        if(num<1){
            return false;
        }
        
        bool flag=false;
        while(num!=1){
            if(num%2==0){
                num=num/2;    
            }
            else if(num%3==0){
                num=num/3;    
            }
            else if(num%5==0){
                num=num/5;    
            }
            else{
                flag=true;
                break;
            }
        }
        if(flag==true || num>1){
            return false;
        }
    return true;
}
    
int main() {
    cout<<"Enter a number";
    int n;
    cin>>n;
    if (isUgly(n)) {
        cout<<"It is an ugly number";
    } else {
        cout<<"It is not an ugly number";
    }
}
 
