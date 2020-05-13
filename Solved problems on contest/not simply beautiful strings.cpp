#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l,a=0,b=0,d=0,c=0,e=0,f=0,g=0,h=0,k=0,m=0,n=0,o=0,p=0,q=0;
    char c1='0',c2='0',c3='0',c4='0',c5='0';
    l=s.size();
    if(l<4)
        {
            cout<<"No"<<endl;
            return 0;
        }
    else
    {
        c1=s[0];
        for(int i=0;i<l;i++)
        {
            if(s[i]==c1)
            {
                e=1;
                a=a+1;
                continue;
            }
            else if(m==0)
            {
                c2=s[i];
                m=1;
            }
            if(s[i]==c2)
            {
                f=1;
                b=b+1;
                continue;
            }
            else if(n==0)
            {
                c3=s[i];
                n=1;
            }
            if(s[i]==c3)
            {
                g=1;
                c=c+1;
                continue;
            }
            else if(o==0)
            {
                c4=s[i];
                o=1;
            }
            if(s[i]==c4)
                {
                    d=d+1;
                    h=1;
                    continue;
                }
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(e==1 && f==0&&g==0&&h==0)
        cout<<"No"<<endl;
    else if(e==1 && f==1 && g==0 &&h==0)
    {
        if(a<=b)
        {
            if(a>=2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
        {
            if(b>=2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    else if(e==1&&f==1&& g==1 && h==0)
        cout<<"Yes"<<endl;
    else if(e==1&&f==1&& g==1 && h==1)
        cout<<"Yes"<<endl;
    else if(e==1&&f==1&& g==0 && h==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
