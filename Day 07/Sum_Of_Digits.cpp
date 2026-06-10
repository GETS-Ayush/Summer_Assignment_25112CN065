#include<iostream>
using namespace std;
int s=0;
int sum(int n)
{
    if(n<10)
    return s+n;
    else
    {
        s+=(n%10);
        sum(n/10);
    }
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"Sum of digits is :"<<sum(n);
    return 0;
}