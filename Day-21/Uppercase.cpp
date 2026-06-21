#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    for(char &ch:s)
    {
        ch=toupper(ch);
    }
    cout<<s;
    return 0;
}