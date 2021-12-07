#include"bits/stdc++.h"

using namespace std;

#define n 20

class Queue
{
    int *arr;
    int front;
    int back;

    public:
    Queue()
    {
        arr=new int[n];
        front =-1;
        back=-1;
    }
    void enqueue(int x)
    {
        if(back==n-1)
        {
            cout<<"queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1)
        {
            front ++;

        }
    }

    void dequeue()
    {
        if(front== -1||front>back)
        {
            cout<<"no element in queue"<<endl;
            return;
        }
        front++;
    }

    int peek()
    {
      if(front== -1||front>back)
        {
            cout<<"no element in queue"<<endl;
            return -1;
            
        }  
        return arr[front];
    }


};

int main()
{
    Queue  q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    return 0;
}