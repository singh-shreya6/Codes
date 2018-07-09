//Spiral Order Traversal of a Tree

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int ll;
#define mkp make_pair

struct Node{
    ll data;
    ll level;
    Node * left,*right; 
    Node(ll val)
    {
        data=val;
        level=0;
        left=NULL;
        right=NULL;
    }
};
 void SpiralOrderTraversal(Node* root)
 {
     if(root==NULL)
         return;
     root->level=0;
     queue<Node*> q;
     q.push(root);
     while(!q.empty())
     {
         Node* temp=q.front();
         q.pop();
         if(temp->left!=NULL)
         {
             temp->left->level=temp->level+1;
             q.push(temp->left);
         }
         if(temp->right!=NULL)
         {
             temp->right->level=temp->level+1;
             q.push(temp->right);
         }
     }
     map<ll,vector<ll>> mp;
     q.push(root);
     while(!q.empty())
     {
         Node* temp=q.front();
         mp[temp->level].push_back(temp->data);
         q.pop();
         if(temp->left!=NULL)
         {
             q.push(temp->left);
         }
         if(temp->right!=NULL)
         {
             q.push(temp->right);
         }
     }
     map<ll,vector<ll> > :: iterator it;
     ll k=0;
     for(it=mp.begin();it!=mp.end();it++)
     {
        if(k%2==0)
        {
        vector<ll> b=it->second;
         for(ll i=0;i<b.size();i++)
            cout<<b[i]<<" ";
         cout<<endl;
        }
         else
         {
           vector<ll> b=it->second;
         for(ll i=b.size()-1;i>=0;i--)
            cout<<b[i]<<" ";
         cout<<endl;  
         }
         k++;
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
        SpiralOrderTraversal(root);
     return 0;
}
