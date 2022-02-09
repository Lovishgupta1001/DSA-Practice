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
int power(int a,int b)
{
   int i,temp;
   if(b==0)
   return 1;
   temp=power(a,b/2);
   temp*=temp;
   if(b%2==0)
   return temp;
   else 
   return temp*a;
}