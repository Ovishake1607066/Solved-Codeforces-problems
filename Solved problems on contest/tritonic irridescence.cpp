#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,a=0,b,c=0,d;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(n==1 && s[i]=='?')
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        if(s[i]==s[i+1] && s[i]!='?')
        {
            cout<<"No"<<endl;
            return 0;
        }
        if(s[i]=='?')
        {
            if(i==0)
            {
                        c=c+2;
                        a=1;
            }
            else if (i==n-1)
            {
                    a=1;
                    c=c+2;
            }
            else
            {
                 if(s[i-1]=='?' || s[i+1]=='?')
                {
                    c=c+2;
                    a=1;
                }
                else if(s[i-1]=='M'&& s[i+1]=='M')
                {
                    a=1;
                    c=c+2;
                }
                else if(s[i-1]=='C' &&s[i+1]=='C')
                    {
                        c=c+2;
                        a=1;
                    }
                else if((s[i-1]=='Y' && s[i+1]=='Y'))
                    {
                        c=c+2;
                        a=1;
                    }
                else
                    {
                        c=c+1;
                    }
            }
        }
    }
    if(c>=2 && a==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
