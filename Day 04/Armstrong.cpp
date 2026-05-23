#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,dig,c=0,arm=0;
    cout<<"Enter a number :";
    cin>>n;
    int cp1=n,cp2=n;
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
    if(n==arm)
    cout<<"Armstrong";
    else
    cout<<"Not Armstrong";
    return 0;
}