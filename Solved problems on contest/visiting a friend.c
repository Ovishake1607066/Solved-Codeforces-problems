#include<stdio.h>
int main()
{
    int n,m,a,b,x,y,i,j,c,s,t;
    scanf("%d%d",&n,&m);
    x=0;
    y=0;
    c=0;
    s=0;
    t=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a==0)
        {
            t=t+1;
        }
        if(a>y)
        {
            c=c+1;
        }
        if(b>=m)
        {
            s=s+1;
        }
        x=a;
        y=b;
    }
    if(c==0 && s!=0 && t!=0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
