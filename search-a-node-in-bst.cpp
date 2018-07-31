#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int ll;

struct Node{
    ll data;
    Node * left,*right; 
    Node(ll val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

bool search(node* root, int x)
{
    if(root!=NULL)
    {
        if(root->data==x)
           return true;
        if(root->data>x)
        return search(root->left,x);
        if(root->data<x)
        return search(root->right,x);
    }
    return false;
}

int main()
{
        faster
        Node *root=new Node(20);
        root->left=new Node(10);
        root->right=new Node(30);
        root->left->left=new Node(5);
        root->left->right=new Node(15);
        root->right->left=new Node(25);
        root->right->right=new Node(35);
        root->left->right->left=new Node(12);
        root->left->right->right=new Node(18);
        int x;
        cin>>x;
        bool f=search(root,x);
        if(f==true)
        cout<<1<<endl;
        else
        cout<<0<<endl;
        return 0;
}
