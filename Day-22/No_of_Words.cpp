#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a line : ";
    getline(cin,s);
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        c++;
    }
    cout<<"Not of words are : "<<c+1;
    return 0;
}