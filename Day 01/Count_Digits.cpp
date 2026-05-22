#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number:";
    int n,c=0;
    cin>>n;
    for(int i=n;i>0;i/=10)
    {
        c++;
    }
    cout<<"Number of digits:"<<c;
    return 0;
}