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

int deleteindex(int arr[],int size,int index)
{
   
  
        for(int i= index; i<=size-2; i++)
        {
            arr[i]=arr[i+1];                   
        }
        cout<<"deletion successfull"<<endl;

    return 0;
}

int main()
{
    int arr[100]={13,26,18,29,36};
    int size=5, index;
    display(arr,size);
    cout<<"Enter the index of deletion ";
    cin>>index;
 
    deleteindex(arr,size,index);
    size -=1;
    display(arr,size);

    return 0;

}