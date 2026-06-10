#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size :";
    cin>>n;
    int a[n];
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    int smax=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>smax&&a[i]!=max)
        smax=a[i];
    }
    cout<<"Second maxima is : "<<smax;
    return 0;
}