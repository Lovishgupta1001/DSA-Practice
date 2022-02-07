#include<iostream>
using namespace std;
int fgcd(int,int);
int main()
{
   int a,b;
   cout<<"Enter Two No.: ";
   cin>>a>>b;
   cout<<"GCD of "<<a<<" & "<<b<<" is: "<<fgcd(a,b);
   return 0;
}
int fgcd(int a,int b)
{
   if(b==0)
   return a;
   else
   return fgcd(b,a%b);
}