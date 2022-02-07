#include<iostream>
using namespace std;
int fgcd1(int,int);
int fgcd2(int,int);
int main()
{
   int a,b;
   cout<<"Enter Two No.: ";
   cin>>a>>b;
   cout<<"GCD of "<<a<<" & "<<b<<" is: "<<fgcd1(a,b)<<endl;
   cout<<"GCD of "<<a<<" & "<<b<<" is: "<<fgcd2(a,b);
   return 0;
}
//Approach 1 which take more time
int fgcd1(int a,int b)
{
   while(a!=b)
   {
      if(a>b)
      a=a-b;
      else
      b=b-a;
   }
   return a;
}
//Approach 2 which take less time in execution than Approach 1
int fgcd2(int a,int b)
{
   if(b==0)
   return a;
   else
   return fgcd2(b,a%b);
}