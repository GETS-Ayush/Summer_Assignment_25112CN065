#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    cout<<"Frequency of characters are \n";
    for(int i=0;i<s.size();i++)
    {
        bool visit=false;
        for(int k=0;k<i;k++)
        {
            if(s[i]==s[k])
            visit=true;
        }

        if(visit==true)
        continue;

        int c=0;
        for(int j=i;j<s.size();j++)
        {
            if(s[i]==s[j])
            c++;
        }
        if(s[i]==' ')
        cout<<"(space) --> "<<c<<"\n";
        else
        cout<<s[i]<<" --> "<<c<<"\n";;
    }
}