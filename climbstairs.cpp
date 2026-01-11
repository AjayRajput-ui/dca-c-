#include <iostream>
using namespace std;

int climbStair(int n)
{
    //base case
    if(n < 0)
    {
        return 0;
    }
    if(n == 0)
    {
        return 1;
    }
    
    return climbStair(n-1) + climbStair(n-2);
}
int main()
{
    int n;
    cin>>n;
    
    int ans = climbStair(n);
    
    cout<< ans <<endl;
    return 0;
}