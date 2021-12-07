#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            cout<<"elemnt found at: ";
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int swap=arr[j];
                arr[j]=arr[i];
                arr[i]=swap;
            }
        }
    }
    int key;
    cout<<"enter number you want to search: ";
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
    return 0;

}