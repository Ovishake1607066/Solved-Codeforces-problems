#include<stdio.h>
int main()
{
    long long int n,a,b,i,j,k,l,x,y,p,q,r,s,c,d;
    scanf("%lld%lld%lld",&n,&a,&b);
    p=0;
    q=0;
    r=0;
    k=0;
    s=0;
    for(i=1,j=1;i<=n/a,j<=n/b;i++,j++)
    {
        p=a*i;
        q=b*j;
        if(p==n)
        {
            printf("YES\n");
            printf("%lld 0",i);
            k=1;
            s=1;
            break;
        }
        else if(q==n)
        {
            printf("YES\n");
            printf("0 %lld",j);
            k=1;
            s=1;
            break;
        }
        if(p>=n)
        {
            break;
        }
        if(q>=n)
        {
            break;
        }
    }
    for(i=1,j=1;i<=n/a,j<=n/b;i++,j++)
    {
        c=0;
        d=0;
        if(s==1)
        {
            break;
        }
        p=a*i;
        q=b*j;
        r=p+q;
        if(r==n)
        {
            printf("YES\n");
            printf("%lld %lld",i,j);
            k=1;
            break;
        }
        if((r+a+b)>n)
        {
            j=j-1;
        }
        if(r>=n)
        {
            break;
        }
    }
    if(k==0)
    {
        printf("NO\n");
    }
    return 0;
}
