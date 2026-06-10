#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        int a=1;
        for(int j=5;j>i;j--)
        {
        cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
        cout<<a;
        a++;
        }
        for(int l=a-2;l>=1;l--)
        {
            cout<<l;
        }
        cout<<"\n";
    }
}