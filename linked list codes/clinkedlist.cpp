//CIRCULAR LINKED LIST
#include"bits/stdc++.h"
using namespace std;

class node{
    public:
    int data ;
    node * next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertathead(node* &head,int val)
{
    node *n = new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node * temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    head=n;
}

void insertattail(node * &head,int val)
{   
    if(head==NULL)
    {
        insertathead(head,val);
        return;
    }
    node *n=new node(val);
    node * temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;
}

void display(node * head)
{
    node * temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<temp->data;
    cout<<endl;
}

void deletion(node * &head,int pos)
{
    node *temp=head;
    if(pos==1)
    {
        head=head->next;
        temp=head;
        while(temp->next->next!=head)
        {
            temp=temp->next;
        }

        node * todelete=temp->next;
        temp->next=head;
        delete todelete;
        return;
    }
    int count=1;

    while(count!=pos-1)
    {
        temp=temp->next;
        count ++;
    }

    node * todelete=temp->next;
    temp->next=todelete->next;

    delete todelete;


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
    deletion(head,1);
    display(head);

    
}
