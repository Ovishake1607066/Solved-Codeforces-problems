#include<stdio.h>
int main()
{
    int n,a[150],b,c,d,i,e,f,g;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    d=3;
    e=1;
    f=2;
    for(i=0;i<n;i++)
    {
        g=d;
        if(a[i]!=d)
        {
            c=1;
        }
        else
        {
            c=0;
            break;
        }
        if(a[i]==e)
        {
            d=f;
        }
        else
        {
            d=e;
        }
        e=a[i];
        f=g;
    }
    if(c==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}