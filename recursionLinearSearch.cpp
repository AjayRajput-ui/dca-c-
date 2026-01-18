#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    cout << " size of array is " << size  <<endl;
    
    for(int i=0; i<size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
bool linearSearch(int arr[], int size, int key)
{
    print(arr,size);
    //base case
    if(size == 0)
        return false;
    if(key == arr[0])
        return true;
    else
    {
        bool remainingPart = linearSearch(arr+1, size -1,key);
        return remainingPart;
        
    }
}

int main()
{
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 5;
    bool ans = linearSearch(arr,size,key);
    
    if(ans)
    {
        cout<<"key is present ";
    }
    else
    {
        cout<< "key is not present ";
    }
    return 0;
}