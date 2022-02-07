// Count Trailing Zeros in Factorial like 5!=120 have 0s=1 and in 10!=3628800 have 0s=2
#include<iostream>
using namespace std;
int CountTrailingZero(int n)
{
   int i,result=0;
   
   if(n<0)
   return -1;

   for(i=5;i<=n;i*=5)
      result+=n/i;
   return result;
}
int main()
{
   int n;
   cout<<"Enter Any Number to find zero in its Factorial : ";
   cin>>n;
   cout<<"Trailing Zeros in: "<<n<<"! is: "<< CountTrailingZero(n);
   return 0;
}