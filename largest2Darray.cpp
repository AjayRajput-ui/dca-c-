#include <iostream>
#include <climits>
using namespace std;
bool ispresent(int arr[3][4],int target,int row, int col )
{
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            if(arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}


//to print col wise sum
void printSumcol(int arr[][4],int row, int col )
{
    cout<<"printing sum col->"<<endl;
    for(int row=0; row<4; row++)
    {
        int sum=0;
        for(int col=0; col<3; col++)
        {
            sum=sum+arr[col][row];
        }
        cout<< sum <<" ";
    }
    cout<<endl;
    
}
int largestColSum(int arr[][4],int row, int col)
{
    int max=INT_MIN;
    int colIndex=-1;
    for(int row=0; row<4; row++)
    {
        int sum=0;
        for(int col=0; col<3; col++)
        {
            sum=sum+arr[col][row];
        }
        if(sum>max)
        {
            max=sum;
            colIndex=row;
        }
    }
    cout<<"the maximum sum is col "<<max<<endl;
    return colIndex;
    
}
//to print row wise sum
void printSum(int arr[][4],int row, int col )
{
    cout<<"printing sum row ->"<<endl;
    for(int row=0; row<3; row++)
    {
        int sum=0;
        for(int col=0; col<4; col++)
        {
            sum=sum+arr[row][col];
        }
        cout<< sum <<" ";
    }
    cout<<endl;
    
}

int largestRowSum(int arr[][4],int row, int col)
{
    int max=INT_MIN;
    int rowIndex=-1;
    for(int row=0; row<3; row++)
    {
        int sum=0;
        for(int col=0; col<4; col++)
        {
            sum=sum+arr[row][col];
        }
        if(sum>max)
        {
            max=sum;
            rowIndex=row;
        }
    }
    cout<<"the maximum sum is row "<<max<<endl;
    return rowIndex;
    
}
int main()
{
    //create 2 d array
    //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    int arr[3][4];
    cout<<"enter the element"<<endl;
   
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    //print 
    
    cout<<" the element"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter the element to search"<<endl;
    int target;
    cin>>target;
    
    if(ispresent(arr,target,3,4))
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    
    printSum(arr,3,4);
    int ans=largestRowSum(arr,3,4);
    cout<<"Max row is at index"<<ans<<endl;
    printSumcol(arr,3,4);
    int ans1=largestColSum(arr,3,4);
    cout<<"Max col is at index"<<ans1<<endl;
    
    return 0;
}