//APPEND LAST K NODES  TO START OF  LINKED LIST
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
int length(node * head)
{
    node * temp=head;
    int l=0;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }

    return l;
}

node * kappend(node * &head,int k)
{
    node * newhead;
    node * newtail;
    node * tail=head;

    int l=length(head);
    k=k%l;
    int count=1;

    while(tail->next!=NULL)
    {
        if(count==(l-k))
        {
            newtail=tail;
        }
        if(count==(l-k+1))
        {
            newhead=tail;
        }

        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;

    return newhead;
}
int main()
{
    node * head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        insertattail(head,arr[i]);
    }

    display(head);
    int k=2;
    node *newhead=kappend(head,k);
    display(newhead);
    return 0;
}
