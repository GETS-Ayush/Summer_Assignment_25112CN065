#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter range :";
    cin>>r;
   for(int i=1;i<=r;i++)
   {
    int c=0;
    for(int j=1;j<=i;j++)
    {
        if(i%j==0)
        c++;
    }
    if(c==2)
    cout<<i<<" is Prime"<<"\n";
    else  
    cout<<i<<" is Not prime"<<"\n";
}
    return 0;
}