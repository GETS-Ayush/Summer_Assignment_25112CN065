#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long b;
    cout<<"Enter binary value";
    cin>>b;
    int j,deci=0,n=0;
    for(int i=b;i!=0;i/=10)
    {
        j=i%10;
        deci=deci+j*pow(2,n);
        n++;
    }
    cout<<deci;
    return 0;
}