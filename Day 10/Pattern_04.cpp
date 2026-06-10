#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        char a='A';
        for(int j=5;j>i;j--)
        {
        cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
        cout<<a;
        a++;
        }
        for(char l=a-2;l>='A';l--)
        {
            cout<<l;
        }
        cout<<"\n";
    }
}