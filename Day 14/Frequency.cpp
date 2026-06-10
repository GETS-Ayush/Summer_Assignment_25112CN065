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
    for(int i=0;i<n;i++)
    {
        int c=1;
        if(a[i]==-1)
        continue;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]=-1;
            }

        }
        cout<<a[i]<<" occurs "<<c<<" times";
        cout<<"\n";
    }
}