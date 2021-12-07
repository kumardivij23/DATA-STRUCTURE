#include"bits/stdc++.h"

using namespace std;

int display(int arr[], int size)
{
    for ( int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
    
}

int insertindex(int arr[], int size, int element,int index, int max)
{
    if(size>=max || index>=size)
    {
        cout<<"ARRAY IS FULL";
    }
    else{
        
        for(int i=size-1;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        cout<<"INSERTED SUCCESSFULLY"<<endl;
    }
    return 0;
}

int main()
{
    int arr[100]={10,24,38,63};
    int size=4,element;
    display(arr,size);
    cout<<"enter the element you want to insert ";
    cin>>element;
    int index;
    cout<<"enter the index at which you want to insert ";
    cin>>index;
    insertindex(arr,size,element,index,100);
    size += 1;
    display(arr,size);
    return 0;
}