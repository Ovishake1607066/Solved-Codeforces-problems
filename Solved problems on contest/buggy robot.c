#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n,c,x,y,p,q,r,w;
    scanf("%d",&n);
    char s[2000];
    scanf("%s",s);
    x=0;
    y=0;
    c=0;
    p=0;
    q=0;
    r=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            x=x+1;
        }
        if(s[i]=='L')
        {
            x=x-1;
        }
        if(s[i]=='U')
        {
            y=y+1;
        }
        if(s[i]=='D')
        {
            y=y-1;
        }
        c=c+1;
        if(x==0 && y==0)
        {
            p=c;
            q=1;
            r=1;
        }
    }
    if(c==n && (q==0 || r==0))
    {
        p=0;
    }
    w=n-abs(x)-abs(y);
    printf("%d\n",w);
}
