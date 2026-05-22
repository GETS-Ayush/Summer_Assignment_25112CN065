#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of N:";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<i<<" x "<<i<<" = "<<i*n<<"\n";
    }
}