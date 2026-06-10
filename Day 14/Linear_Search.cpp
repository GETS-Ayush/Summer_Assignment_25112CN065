#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter lenght of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s;
    cout<<"Enter search element : ";
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
        cout<<"Element found at "<<i+1<<" position";
        c++;
        }
    }
    if(c==0)
    cout<<"Element not found";
}