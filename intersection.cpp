#include <iostream>
using namespace std;
void intersection(int num1[],int n, int num2[], int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(num1[i] == num2[j])
            {
                cout << num1[i] << " ";
                i++;
                j++;
            }
            else if(num1[i]<num2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
    }
}

int main()
{
    int num1[4]={1,2,2,1};
    int num2[2]={2,2};
    
    intersection(num1,4,num2,2);
    return 0;
}