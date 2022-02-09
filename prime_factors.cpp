// Time Complexity is 1/3rd of O(sqrt n)
#include<iostream>
#include<math.h>
using namespace std;
void prime_factor(long);
int main()
{
   long a;
   cout<<"Enter any No. : ";
   cin>>a;
   prime_factor(a);
   return 0;
}

void prime_factor(long n)
{
   if(n<=1)
   return;
   while(n%2==0)
   {
      cout<<n<<" ";
      n/=2;
   }
   while(n%3==0)
   {
      cout<<n<<" ";
      n/=3;
   }
   for(long i=5;i*i<=n;i+=6)
      {
         while(n%i==0)
         {
            cout<<i<<" ";
            n/=i;
         }
         while(n%(i+2)==0)
         {
            cout<<i+2<<" ";
            n/=(i+2);
         }
      }
   if(n>3)
      cout<<n;
}