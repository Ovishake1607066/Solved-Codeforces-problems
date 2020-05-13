#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,j,k,n,a,b,c,d,s;
    scanf("%lld",&n);
    c=0;
    for(j=n;j>=1;j--)
    {
        if(n%j==0)
        {
            a=j;
            for(i=1;i<12;i++)
            {
                b=(pow(2,i)-1)*(pow(2,(i-1)));
                if(a==b)
                {
                    printf("%lld\n",a);
                    c=1;
                    break;
                }
            }

        }
        if(c==1)
        {
            break;
        }

    }
}
