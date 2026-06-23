#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    int freq[256]={0};
    for(char ch:s)
    {
        freq[ch]++;
    }
    for(char ch:s)
    {
        if(freq[ch]!=1)
        {
            cout<<"First repeating character is : "<<ch;
            return 0;
        }
    }
    cout<<"No repeating characters found ";
    return 0;
}