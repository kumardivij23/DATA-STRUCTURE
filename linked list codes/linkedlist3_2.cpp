#include"bits/stdc++.h"
//RECURSIVE METHOD OF REVERSING
using namespace std;

class node
{
    public:

    int data;
    node * next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertattail(node * &head, int val)
{
    node *n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node * temp=head;
    while(temp->next!= NULL)
    {
        temp=temp->next;
    }

    temp->next=n;
}

void display(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NUll"<<endl;
}

node * reverserec(node * &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    node * newhead= reverserec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

int main()
{
    node * head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    display(head);
    node *newhead=reverserec(head);
    display(newhead);
    return 0;
}