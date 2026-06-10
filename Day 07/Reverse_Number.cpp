#include<iostream>
using namespace std;
int rev=0;
int reverse(int n)
{
    if(n<10)
    return rev*10+n;
    else
    {
        rev=rev*10+(n%10);
        reverse(n/10);
    }
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Reverse is : "<<reverse(n);
}