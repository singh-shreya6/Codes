//Pair wise swap of Linked List

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct node
{
    ll data;
    node* next;
};
node* head=NULL;

void pairwiseSwap()
{
    node *ptr=head;
    while(ptr!=NULL && ptr->next!=NULL)
    {
        swap(ptr->data,ptr->next->data);
        ptr=ptr->next->next;
    }
}

void insert(ll val)
{
    node* temp=new node;
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    head=temp;
    else
    {
      node* ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void print()
{
    node* ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main()
{
    ll n;
    cin>>n;
    ll val;
    for(ll i=0;i<n;i++)
    {
        cin>>val;
        insert(val);
    }
    print();
    pairwiseSwap();
    print();
return 0;
}
