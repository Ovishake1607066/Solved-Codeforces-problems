#include<stdio.h>
int main()
{
    long long int n,m,s,t,u;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        s=((m+1)*m)/2;
        t=((n-1)*n)/2;
        u=s-t;
        printf("Sum of %lld to %lld is -> %lld;\n",n,m,u);
    }
    return 0;
}
