#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    int b[n];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b[c]=a[i];
                c++;
            }
        }
    }
    cout<<"Duplicate elements are : ";
    for(int i=0;i<c;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}