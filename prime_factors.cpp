// Time Complexity is 1/3rd of O(sqrt n.logn)
#include<iostream>
using namespace std;
void find_divisor(int);
int main()
{
   int a;
   cout<<"Enter any No. : ";
   cin>>a;
   find_divisor(a);
   return 0;
}

void find_divisor(int n)
{
   if(n<=1)
   return;
   while(n%2==0)
   {
      cout<<"2"<<" ";
      n/=2;
   }
   while(n%3==0)
   {
      cout<<"3"<<" ";
      n/=3;
   }
   for(int i=5;i*i<=n;i+=6)
      {
         while(n%i==0)
         {
            cout<<i<<" ";
            n/=i;
         }
         while(n%(i+2)==0)
         {
            cout<<(i+2)<<" ";
            n/=(i+2);
         }
      }
   if(n>3)
      cout<<n;
}