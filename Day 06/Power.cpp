#include<iostream>
using namespace std;
int main()
{
    int x,n,pow=1;
    cout<<"Enetr number and its power";
    cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
        pow*=x;
    }
    cout<<pow;
    return 0;
}