#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    string p;
    p.resize(s.size());
    for(char &ch:s)
    ch=tolower(ch);
    for(int i=0;i<s.size();i++)
    {
        p[s.size()-1-i]=s[i];
    }
    if(s==p)
    cout<<"Palindrome";
    else
    cout<<"Not Plaindrome";
    return 0;
}