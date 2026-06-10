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
    int rev[n];
    for(int i=0;i<n;i++)
    {
        rev[i]=a[n-1-i];
    }
    cout<<"Reversed array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<rev[i]<<" ";
    }
}