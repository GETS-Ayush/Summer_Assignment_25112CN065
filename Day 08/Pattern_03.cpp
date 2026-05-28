#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        char c='A';
        for(int j=1;j<=i;j++)
        {
            cout<<c;
            c=c+1;
        }
        cout<<"\n";
    }
}