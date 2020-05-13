#include<stdio.h>
int main()
{
    long long int k,n,w,i,s;
    scanf("%lld%lld%lld",&k,&n,&w);
    s=0;
    for(i=1;i<=w;i++)
    {
        s=s+(i*k);
    }
    if(s>n)
    {
        printf("%lld\n",s-n);
    }
    else
    {
        printf("0\n");
    }
}
