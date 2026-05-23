#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1;
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int fib[n];
    fib[0]=a;
    for(int i=1;i<n;i++)
    {
        fib[i]=b;
        b=a+b;
        a=b-a;
    }
    cout<<"Fibonacci Term is :"<<fib[n-1];
    return 0;
}