#include <iostream>
using namespace std;

int findPivot(int arr[], int s, int e)
{
    if (s >= e)
        return s;

    int mid = s + (e - s) / 2;

    if (arr[mid] >= arr[0])
        return findPivot(arr, mid + 1, e);
    else
        return findPivot(arr, s, mid);
}

int main()
{
    int arr[] = {99, 56, 14, 18};
    int size = 4;

    int ans = findPivot(arr, 0, size - 1);

    cout << "Pivot index = " << ans << endl;
    cout << "Pivot element = " << arr[ans] << endl;

    return 0;
}

