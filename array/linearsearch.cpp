#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            cout<<"element found at:";
            return i+1;
        }         
        
    }
    return -1;
}

int main()
{
    int n;
    cout<<"enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the number you want to search"<<endl;
    cin>>key;
    cout<<linearsearch(arr,n,key)<<endl;
    return 0;

}