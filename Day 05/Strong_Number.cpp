#include<iostream>
using namespace std;
int fac(int a)
{
    int fac=1;
    for(int i=1;i<=a;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int main()
{
    int n,dig,l,sum=0;
    cout<<"Enter a number :";
    cin>>n;
    int c=n;
    while(c!=0)
    {
        dig=c%10;
        l=fac(dig);
        sum+=l;
        c/=10;
    }
    if(sum==n)
    cout<<"Strong";
    else
    cout<<"Not Strong";
}