#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1; // left side me search
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1; // right side me search
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}


int main()
{
    int even[5] = {2, 3, 3, 5, 7};
    cout << "first occurance of 3 is " << firstOcc(even, 5, 3) << endl;
    
    cout << "last occurance of 3 is " << lastOcc(even, 5, 3) << endl;

    return 0;
}