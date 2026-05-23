#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a range :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    int cp1=i,cp2=i,dig,c=0,arm=0;
    while(cp1!=0)
    {
        cp1/=10;
        c++;
    }
    while(cp2!=0)
    {
        dig=cp2%10;
        arm=arm+round(pow(dig,c));
        cp2/=10;
    }
    if(i==arm)
    cout<<i<<" ";
    }
    return 0;
}