#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter length of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    double avg=0.0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=(double)sum/n;
    cout<<"Sum = "<<sum<<"\n"<<"Average = "<<avg;
}