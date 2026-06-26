#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int c=1;
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
            
        }
        s.insert(i+1,to_string(c));
        if(c>1)
        {
            s.erase(i+2,c-1 );
        }
        i++;

    }
    cout<<s;
    return 0;
}