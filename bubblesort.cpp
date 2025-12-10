#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=1; i<n-1; i++)
    {//for round 1 to n-1
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
              int temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
                    
            }
        }
    }
}


int main()
{
    int arr[5] = {3, 1, 4, 6, 8};

    bubbleSort(arr, 5);

    cout << "After Sorting: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
