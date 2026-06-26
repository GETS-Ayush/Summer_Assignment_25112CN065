#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    int max=0;
    for(int i=0;i<s.size();i++)
    {
        int c=0;
        while(i<s.size()&&s[i]!=' ')
        {
            c++;
            i++;
        }
        if(c>max)
        max=c;
    }
    for(int i=0;i<s.size();i++)
    {
        int c=0;
        while(i<s.size()&&s[i]!=' ')
        {
            c++;
            i++;
        }
        if(c==max)
        {
            string m;
            int j=i-c,y=0;
            while(j<s.size()&&s[j]!=' ')
            {
                m.insert(y,1,s[j]);
                y++;
                j++;
            }
            cout<<"Longest Word is : "<<m;
            return 0;
        }
    }
    return 0;
}