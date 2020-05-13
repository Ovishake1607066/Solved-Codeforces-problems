#include<stdio.h>
int main()
{
    long long int n,i,j,a,b,c1,c2,c3,c4,s2,k,l,m,d;
    scanf("%lld",&n);
    int s[n];
    c1=0;
    c2=0;
    c3=0;
    c4=0;
    s2=0;
    d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        if(s[i]==4)
        {
            c4=c4+1;
        }
        if(s[i]==3)
        {
            c3=c3+1;
        }
        if(s[i]==2)
        {
            c2=c2+1;
            s2=s2+2;
        }
        if(s[i]==1)
        {
            c1=c1+1;
        }
    }
    if(c3<=c1)
    {
        a=c3;
        d=d+(c1-c3);
    }
    else if(c1<c3)
    {
        a=c1;
        b=(c3-c1);
        a=a+b;
    }
    j=s2/4;
    k=s2%4;
    l=d+k;
    m=l/4;
    if(l%4!=0)
    {
        a=a+1;
    }
    a=a+j+m+c4;
    printf("%lld\n",a);
    return 0;
}
