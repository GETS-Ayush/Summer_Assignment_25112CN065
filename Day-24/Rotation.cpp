#include<iostream>
using namespace std;
int main()
{
    string s,x;
    cout<<"Enter two strings\n";
    cin>>s>>x;
    for(int i=0;i<s.size();i++)
    {
        int temp=s[s.size()-1];
        for(int j=s.size()-1;j>0;j--)
        {
            s[j]=s[j-1];
        }
        s[0]=temp;
        if(s==x)
        {
            cout<<"Rotation is there";
            return 0;
        }
    }
    cout<<"Strings are not matched even after rotation";
    return 0;
}