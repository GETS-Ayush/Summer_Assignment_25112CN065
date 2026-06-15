#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=a[n-1-i];
        a[n-1-i]=a[i];
        a[i]=temp;
    }
    cout<<"Reversed array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}