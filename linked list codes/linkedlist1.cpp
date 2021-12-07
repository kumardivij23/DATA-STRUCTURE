#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

    //insert element at tail
    void insertattail(Node * &head,int val)
    {
        Node * n=new Node(val);

        if(head==NULL)
        {
            head=n;
            return;
        }

        Node *temp=head;
        
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=n;
        
    }

    void display(Node *head)
    {
        Node *temp=head;
        if(temp==NULL)
        {
            cout<<"list is empty now"<<endl;
        }
        else{
         while(temp!=NULL)
         {
            cout<<temp->data<<"->";
            temp=temp->next;
         }
         cout<<"NULL"<<endl;
        } 
    }
    //insert element at head
    void insertathead(Node * &head,int val)
    {
        Node *n= new Node(val);
        n->next=head;
        head=n;
    }
    //search element in linked list
    bool search(Node *head,int key)
    {
        Node * temp=head;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                cout<<"found";
                return true;
            }
            temp=temp->next;
        }
        cout<<"not found";
        return false;
    }


int main()
{
    Node *head=NULL;
    display(head);
    cout<<"inserting elements....."<<endl;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    display(head);
    insertathead(head,4);
    display(head);
    insertathead(head,5);
    display(head);
    search(head,1);
    
    return 0;

}