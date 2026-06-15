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
    int m;
    cout<<"Enter times you want to shift the array to left : ";
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int temp=a[n-1];
        for(int i=n-1;i>=1;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}