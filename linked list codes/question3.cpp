// MERGE TWO SORTED LINKED LIST
#include"bits/stdc++.h"
using namespace std;

class node
{   public:
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

node * merge(node * &head1, node * &head2)
{
    node *p1=head1;
    node * p2=head2;

    node * dumynode= new node(-1);
    node * p3=dumynode;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }

        else{
            p3->next=p2;
            p2=p2->next;
        }

        p3=p3->next;
    }

    while (p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dumynode->next;
}

int main()
{
    node * head1=NULL;
    node * head2=NULL;

    int arr[]={1,2,6};
    for(int i=0;i<3;i++)
    {
        insertattail(head1,arr[i]);
    }
    int ar[]={3,4,5};
    for(int j=0;j<3;j++)
    {
        insertattail(head2,ar[j]);
    }

    display(head1);
    display(head2);
    node * newhead=merge(head1,head2);
    display(newhead);
    return 0;
}