#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,a,l,c,c1,c2;
    cin>>t;
    for(i=0;i<t;i++)
    {
        c=0;
        c1=0;
        c2=0;
        char s[1005];
        cin>>s;
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(s[j]=='A'|| s[j]=='H'||s[j]=='M'||s[j]=='I'||s[j]=='O'||s[j]=='T'||s[j]=='U'||s[j]=='V'||s[j]=='X'||s[j]=='W'||s[j]=='Y')
            {
                if(s[j]==s[l-c1-1])
                    c2=c2+1;
                    else
                    {
                        c=1;
                        break;
                    }
            }
            else
            {
                c=1;
                break;
            }
            c1=c1+1;
        }
        if(c==0 && c2==l)
            cout<<"yes"<<endl;
        if(c==1)
            cout<<"no"<<endl;
    }
}
