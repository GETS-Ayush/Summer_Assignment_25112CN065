#include<iostream>
using namespace std;
int factors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    factors(n);
    return 0;
}