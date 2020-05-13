#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x,y,a,b,c=0,d=0,co=0;
    cin>>n;
    char s[n];
    cin>>s;
    x=0;
    y=0;
    for(i=0;i<n;i++)
    {
        a=0;
        b=0;
        if(s[i]=='R')
            {
                if(c==1)
                    co=co+1;
                c=0;
                d=0;
                x=x+1;
                a=1;
            }
        else
            {
                if(d==1)
                    {
                        co=co+1;
                    }
                d=0;
                c=0;
                y=y+1;
                b=1;
            }
        if(x==y && a==1)
        {
            c=1;
        }
        if(x==y && b==1)
        {
            d=1;
        }
    }
    cout<<co;

}
