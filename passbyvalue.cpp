//function
#include <iostream>
using namespace std;
// Online C compiler to run C program online


int sum(int n)//parameters
{
   int l=0,m=0,i;
   while(n>=0)
   {
      l=n%10;
       m=m+l;
      n=n/10;
     
      
   }
   
   return m;
}

int main() {
    //function calling/invoke
  
  cout<<"sum is="<<sum(2356)<<endl;//arguments
  return 0;

}