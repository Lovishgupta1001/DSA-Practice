// Time Complexity is 1/3rd of O(sqrt n)
#include<iostream>
#include<math.h>
using namespace std;
bool prime(int);
int main()
{
   int a,b;
   cout<<"Enter any No. : ";
   cin>>a;
   cout<<"if 0: Not Prime\tif 1: Prime\n"<<prime(a);
   return 0;
}

bool prime(int n)
{
   if(n==1)
   return false;
   if(n==2 || n==3)
   return true;
   if(n%2==0 || n%3==0)
   return false;
   for(int i=5;i<=sqrt(n);i+=6)
      if(n%i==0 || n%(i+2)==0)
      return false;
   return true;
}