#include<iostream>
using namespace std;
int Prime_Factor(int n)
{
    int pf;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
              int c=0;
              for(int j= 1;j<=i;j++)
             {
                 if(i%j==0)
                 c++;
             } 
             if(c==2)
             pf=i;
        }
    }
    cout<<"Largest Prime Factor :"<<pf;
    return 0;
}

int main()
{
    int n,pf;
    cout<<"enter a number:";
    cin>>n;
    Prime_Factor(n);
    return 0;
}