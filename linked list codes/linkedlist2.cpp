#include"bits/stdc++.h"
//DELETION IN LINKED LIST
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
//delete at head 
void deleteathead(node* &head)
{
    node * todelete = head;
    head=head->next;

    delete todelete;
}

void deletion(node * &head,int val)
{
    node * temp=head;
    //deletion of first element and for single element in linked list
    if(head->next==NULL || head->data==val)
    {
        deleteathead(head);
        return;
    }
    //delete in between and at tail
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }

    node *todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
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
    deletion(head,3);
    display(head);
    deletion(head,5);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}