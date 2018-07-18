#include<bits/stdc++.h>
using namespace std;
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
void levelOrder(Node * root) 
{
        if(root==NULL)
            return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node* temp=q.front();
            cout<<temp->data<<" ";
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
    }
int main()
{
        faster
        Node *root=new Node(20);
        root->left=new Node(8);
        root->right=new Node(22);
        root->left->left=new Node(5);
        root->left->right=new Node(3);
        root->right->left=new Node(4);
        root->right->right=new Node(25);
        root->left->right->left=new Node(10);
        root->left->right->right=new Node(14);
        levelOrder(root);
     return 0;
}

   
