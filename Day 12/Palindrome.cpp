#include<iostream>
using namespace std;
int palin(int n)
{
    int rev=0,dig,a=n;
    while(n!=0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }
    if(rev==a)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    palin(n);
    return 0;
}