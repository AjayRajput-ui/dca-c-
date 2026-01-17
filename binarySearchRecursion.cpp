#include <iostream>
using namespace std;

void print(int arr[],int size,int e)
{
    for(int i=size; i<=e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int arr[],int size,int e, int key)
{ 
    cout<<endl;
    print(arr,size,e);
    //base case
    //element not found
    if(size>e)
       return false;
       
    int mid = size + (e - size)/2;
    //element found
    
    if(arr[mid] == key)
        return true;
        
    if(arr[mid]<key)
    {
        return binarySearch(arr,mid+1,e,key);
    }
    else
    {
        return binarySearch(arr,size,mid-1,key);
    }
}
int main()
{
    int arr[6] ={2,4,6,10,14,18};
    int size = 6;
    int key = 18;
    
    bool ans = binarySearch(arr,0,size-1,key); 
    if(ans)
    {
        cout<<"element is found "<<endl;
    }
    else
    {
        cout<<"element is not found "<<endl;
    }
    return 0; 
}