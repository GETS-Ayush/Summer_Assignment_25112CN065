#include<iostream>
using namespace std;
int prime(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        c++;
    }
    if(c==2)
    cout<<"Prime";
    else
    cout<<"Not Prime";
}
int main()
{
    int a;
    cout<<"Enter a number :";
    cin>>a;
    prime(a);
}