#include<stdio.h>
int main()
{
    long long int n,a,b=0,c=0,d,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(a%2==0)
            b=b+1;
        else
            c=c+1;
    }
    if(b<=c)
        {
            d=(c-b)/3;
            printf("%lld",b+d);
        }
    else
        printf("%lld",c);
}
