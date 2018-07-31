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
    queue<node*> q;
    q.push(root);
    int flag=0;
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp->data==x)
        {
            flag=1;
            break;
        }
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
    }
    if(flag==1)return true;
    else return false;
}


int main()
{
        faster
        Node *root=new Node(20);
        root->left=new Node(19);
        root->right=new Node(30);
        root->left->left=new Node(25);
        root->left->right=new Node(75);
        root->right->left=new Node(35);
        root->right->right=new Node(60);
        root->left->right->left=new Node(12);
        root->left->right->right=new Node(23);
        int x;
        cin>>x;
        bool f=search(root,x);
        if(f==true)
        cout<<1<<endl;
        else
        cout<<0<<endl;
        return 0;
}
