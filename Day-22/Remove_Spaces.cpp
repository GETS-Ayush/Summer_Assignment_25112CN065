#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    s.erase(remove(s.begin(),s.end(),' '),s.end());

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            for(int j=i;j<s.size()-1;j++)
            {
                s[j]=s[j+1];
            }
            s.resize(s.size()-1);
            i--;
        }
    }
    cout<<s;
}