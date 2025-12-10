 #include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int minVal = arr[i];
        int index = i;

        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < minVal)
            {
                minVal = arr[j];
                index = j;
            }
        }

        // swap arr[i] and arr[index]
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

int main()
{
    int arr[5] = {3, 1, 4, 6, 8};

    selectionSort(arr, 5);

    cout << "After Sorting: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
