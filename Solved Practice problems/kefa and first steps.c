#include<stdio.h>
int main()
{
    long long int n,i,c,s;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    c=0;
    s=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]>=a[i])
        {
            c=c+1;
            if(c>s)
            {
                s=c;
            }
        }
        else
        {
            c=0;
        }
    }
    printf("%lld\n",s+1);
}
