#include<iostream>
using namespace std;
void fib(int n)
{
    int a=0,b=1;
    cout<<a<<" ";
    for(int i=2;i<=n;i++)
    {
        cout<<b<<" ";
        b=a+b;
        a=b-a;
    }
}
int main()
{
    int n;
    cout<<"Enter limit of series : ";
    cin>>n;
    fib(n);
}