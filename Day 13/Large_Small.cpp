#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter lenght of array :";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        else if(a[i]<min)
        min=a[i];
    }
    cout<<"Maximum = "<<max<<"\n";
    cout<<"Minimum = "<<min;
}