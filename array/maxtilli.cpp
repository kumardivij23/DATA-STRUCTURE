#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int mx=INT_MIN;
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<5;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    
    return 0;

}