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
    int ne=0,no=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        ne++;
        else
        no++;
    }
    cout<<"Number of even elements = "<<ne<<"\n"<<"Number of odd elements = "<<no;
}