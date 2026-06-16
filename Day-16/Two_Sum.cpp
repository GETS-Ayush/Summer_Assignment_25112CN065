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
    int s;
    cout<<"Enter sum : ";
    cin>>s;
    cout<<"Pair are : ";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i+j==s)
            {
                cout<<i<<" "<<j<<"\n";
            }
        }
    }
}