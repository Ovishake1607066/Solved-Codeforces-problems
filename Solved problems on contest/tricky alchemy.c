#include<stdio.h>
int main()
{
    long long int a,b,x,y,z,m,n,i,j,s,c,ans;
    scanf("%lld%lld%lld%lld%lld",&a,&b,&x,&y,&z);
    m=x*2;
    m=m+y;
    if(a>m)
        s=0;
    else
        s=m-a;
    n=z*3;
    n=n+y;
    if(b>n)
        c=0;
    else
        c=n-b;
    ans=s+c;
    printf("%lld\n",ans);
    return 0;
}
