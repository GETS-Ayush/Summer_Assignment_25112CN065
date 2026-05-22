#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the value of N";
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;

}