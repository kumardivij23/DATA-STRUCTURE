//linked list implementation of queue
#include"bits/stdc++.h"
using namespace std;

class Node
{

    public:
    int data;
    Node * next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }

};

class Queue
{   
    public:
    Node * front;
    Node * back;

    Queue()
    {
        front=NULL;
        back=NULL;
    }

    void push(int x)
    {
        Node *n= new Node(x);
        if (front==NULL)
        {
            back=n;
            front=n;
            return;
        }

        back->next=n;
        back=n;

    }

    void pop()
    {
        if(front==NULL)
        {
            cout<<"queue underflow"<<endl;
            return;
        }

        Node* todelete=front;
        front= front->next;
        delete todelete;
    }

    int peek()
    {
        
        if(front==NULL)
        {
            cout<<"queue underflow"<<endl;
            return 0;
        }
        return front->data;
    }

    bool empty()
    {
        if(front==NULL)
        {
            return true;
        }

        return false;
    }

};

int main()
{
    Queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.empty();

    return 0;

}