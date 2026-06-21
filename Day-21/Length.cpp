#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    cout<<"Lenght is : "<<i;
    return 0;
}