#include<iostream>
using namespace std;
void perfect(int n)
{
    int per=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            per+=i;
        }
    }
    if(per==n)
    cout<<"Perfect Number";
    else
    cout<<"Not Perfect NUmber";
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    perfect(n);
    return 0;
}
