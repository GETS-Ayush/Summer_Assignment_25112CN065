#include<iostream>
using namespace std;
int main()
{
    string s,x;
    cout<<"Enter string : ";
    cin>>s;
    x.resize(s.size());
    for(int i=0;i<s.size();i++)
    {
        x[i]=s[s.size()-1-i];
    }
    cout<<"Reversed string is : "<<x;
    return 0;
}