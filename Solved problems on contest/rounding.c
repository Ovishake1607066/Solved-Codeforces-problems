#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,a,b;
    scanf("%lld",&n);
    a=(n%10);
    b=10-a;
    if(a>5)
    {
        printf("%lld",n+b);
    }
    else
    {
        printf("%lld",n-a);
    }
    return 0;
}
