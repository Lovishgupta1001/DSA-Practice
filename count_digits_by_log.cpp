#include<iostream>
#include<math.h>
using namespace std;
int CountDig(long double);

int main()
{
    long double n,sum;
    cout<<"Enter any No. to Count its Digits:";
    cin>>n;
    sum=CountDig(n);
    cout<<"No of Digits in "<<n<<" is: "<<sum;
}
int CountDig(long double n)
{
    return floor(log10(n)+1);
}