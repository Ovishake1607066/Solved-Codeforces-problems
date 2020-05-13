#include<stdio.h>
int main()
{
    long long int n,m,a,b,i;
    scanf("%lld%lld",&n,&m);
    a=pow(2,n);
    b=m%a;
    printf("%lld",b);
    return 0;
}
