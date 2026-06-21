#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    int v=0,c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        v++;
        else 
        c++;
    }
    cout<<"Number of consonants are : "<<c<<"\n";
    cout<<"Number of vowels are : "<<v;
}