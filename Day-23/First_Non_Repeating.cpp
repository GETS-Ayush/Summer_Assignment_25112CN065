#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        bool v=false;
        for(int k=0;k<i;k++)
        {
            if(s[i]==s[k])
            v=true;
        }
        if(v==true)
        continue;

        int c=0;
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            cout<<"First non repeating character is : "<<s[i];
            break;
        }
    }
    return 0;
}