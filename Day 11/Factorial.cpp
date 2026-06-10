#include<iostream>
using namespace std;
int factorial(int a)
{
    int fac=1;
    for(int i=1;i<=a;i++)
    {
        fac*=i;
    }
    cout<<"Factorial :"<<fac;
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    factorial(n);
}