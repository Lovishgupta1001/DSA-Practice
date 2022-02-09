// Time Complexity is O(log n)
#include<iostream>
using namespace std;
int power(int,int);
int main()
{
   int a,b;
   cout<<"Enter Two No. : ";
   cin>>a>>b;
   cout<<a<<" power "<<b<<" is "<<power(a,b);
   return 0;
}
int power(int x,int n)
{
   int res=1;
   while(n>0)
   {
      if(n&1)
      res*=x;
      x*=x;
      n>>=1;
   }
   return res;
}