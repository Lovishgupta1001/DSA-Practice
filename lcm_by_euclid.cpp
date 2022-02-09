#include<iostream>
using namespace std;
int gcd(int,int);
int lcm(int,int);
int main()
{
   int a,b;
   cout<<"Enter any Two No. to find GCD and LCM : ";
   cin>>a>>b;
   cout<<"GCD is: "<<gcd(a,b)<<endl<<"LCM is: "<<lcm(a,b);
   return 0;
}

int gcd(int a,int b)
{
   if(b==0)
   return a;
   return gcd(b,a%b);
}

int lcm(int a,int b)
{
   if(b==0)
   return a;
   else if(a==0)
   return b;
   return ( (a*b)/gcd(b,a%b) );

}