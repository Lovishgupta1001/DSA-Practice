// Time Complexity is O(sqrt n)
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
   int i;
   for(i=1;i*i<n;i++)
      {
         if((n%i)==0)
         cout<<i<<" ";
      }
   for(;i>=1;i--)
      {
         if((n%i)==0)
         cout<<(n/i)<<" ";
      }
}