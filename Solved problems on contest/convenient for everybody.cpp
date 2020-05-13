#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,s1,f,i,j=0,b,c,d,e=0,s=0,k,g,x,y=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    cin>>s1>>f;
    a=f-s1;
    g=a;
    for(i=0;i<n;i++)
    {
        s=0;
        for( ;j<a;j++)
        {
            if(j==n)
            {
                s=ara[0];
                y=1;
                if(g>1)
                {
                    x=n-1;
                    for(k=0;k<g-1;k++)
                    {
                    s=s+ara[x];
                    x--;
                    }
                    break;
                }
            }
            s=s+ara[j];
        }
        if(s>e)
        {
            e=s;
            if(y==1)
                d=1;
            else
                d=j;
        }
        j=j-g+1;
        a++;
    }
    cout<<d;
}
