#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter a decimal value";
    int n;
    cin>>n;
    int j;
    vector<int>a;
    for(int i=n;i>=1;i/=2)
    {
        j=i%2;
        a.insert(a.begin(),j);
    }
    for(auto b=a.begin();b!=a.end();b++)
    cout<<*b<<" ";
}