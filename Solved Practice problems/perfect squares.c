#include<stdio.h>
int main()
{
    long long int fa,fb,n,i,a,b=-1000000;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(a>=0)
        {
            fa=pow(a,0.5);
            if((fa*fa)!=a)
            {
                if(a>b)
            {
                b=a;
            }
            }
        }
        else
        {
            if(a>b)
            {
                b=a;
            }
        }
    }
    printf("%lld",b);
    return 0;
}
