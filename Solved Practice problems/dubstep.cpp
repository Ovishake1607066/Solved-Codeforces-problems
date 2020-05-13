#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    char s2[2000];
    cin>>s;
    int i,j,a=0,b=0,c,d;
    for(i=0,j=0;i<s.size(); )
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+3;
            if(a==1)
                b=1;
        }
        else
        {
            if(a==1 && b==1)
            {
                cout<<" ";
                a=0;
                b=0;
            }
            cout<<s[i];
            i++;
            a=1;
        }
    }
}
