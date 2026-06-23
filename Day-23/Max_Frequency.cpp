#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    int max=0,freq[256]={0};
    char ans;
    for(char ch:s)
    {
        freq[ch]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            ans=i;
        }
    }
    cout<<"Maximum occuring character is : "<<ans;
    return 0;
}