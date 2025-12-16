#include <iostream>
#include<vector>

using namespace std;
void merge(int arr1[],int n, int arr2[],int m)
{
    int i=n-m-1;
    int j=m-1;
    int k=n-1;
    while(i>=0 && j>=0)
    {
        if(arr1[i]>arr2[j])
        {
            arr1[k]= arr1[i];
            k--;
            i--;
        }
        else
        {
            arr1[k]=arr2[j];
            k--;
            j--;
        }
    }
    //copy first array k element ko
    while(i>=0)
    {
        arr1[k]=arr1[i];
        k--;
        i--;
    }
    // copy kardo second array k remaining element ko
    while(j>=0)
    {
        arr1[k]=arr2[j];
        k--;
        j--;
    }
}

void print(int ans[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    
    merge(arr1,8,arr2, 3);
    
    print(arr1,8);
    return 0;
}