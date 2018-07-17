// top View without hd in struct

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int ll;
#define mkp make_pair

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
 void topView(Node* root)
 {
     if(root==NULL)
         return;
     map<int,int> mp;
     int hd=0;
     queue<pair<Node*,int> > q;
     q.push(make_pair(root,0));
     while(!q.empty())
     {
         pair<Node*,int> temp= q.front();
         q.pop();
         hd=temp.second;
         if(mp[hd]==0)
         {
           mp[hd]=temp.first->data;  
         }      
         if(temp.first->left!=NULL)
         {
             q.push(make_pair(temp.first->left,hd-1));
         }
        if(temp.first->right!=NULL)
         {
             q.push(make_pair(temp.first->right,hd+1));
         } 
     }
     map<int,int>::iterator it;
     for(it=mp.begin();it!=mp.end();it++)
         cout<<it->second<<" ";
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
        topView(root);
     return 0;
}
