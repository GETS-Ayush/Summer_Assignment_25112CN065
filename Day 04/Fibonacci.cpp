#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1;
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<a<<" ";
    for(int i=2;i<=n;i++)
    {
        cout<<b<<" ";
        b=a+b;
        a=b-a;
    }
    return 0;
}