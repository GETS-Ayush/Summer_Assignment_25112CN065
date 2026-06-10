#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter lenght of array :";
    cin>>n;
    int a[n];
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Elemets are : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}