#include<iostream>
using namespace std;
int main()
{
    string x,s;
    cout<<"Enter two strings\n";
    cin>>x>>s;
    if(x.size()==s.size())
    {
        int freqx[256]={0};
        for(char ch:x)
        {
            freqx[ch]++;
        }
        int freqs[256]={0};
        for(char ch:s)
        {
            freqs[ch]++;
        }
        int c=0;
        for(char ch:s)
        {
            if(freqs[ch]==freqx[ch])
            c++;
        }
        if(c==s.size())
        cout<<"Anagram strings";
        else 
        cout<<"Not Anagram";
        return 0;
    }
    cout<<"Not Anagram";
    return 0;
}