#include<iostream>
#include<cmath>
using namespace std;
void arm(int n)
{
    int c=0,a=n,b=n;
    while(a!=0)
    {
        a/=10;
        c++;
    }
    int dig,ar=0;
    while(b!=0)
    {
        dig=b%110;
        ar=ar+pow(dig,c);
        b/=10;
    }
    if(ar==n)
    cout<<"Armstrong";
    else
    cout<<"Not Armstrong";
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    arm(n);
}