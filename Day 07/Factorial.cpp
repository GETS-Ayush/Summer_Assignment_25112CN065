#include<iostream>
using namespace std;
int fac(int n)
{
    int f=n;
    if(n>0)
    {
    f=f*fac(n-1);
    }
    else 
    return 1;
}
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<fac(n);
}
