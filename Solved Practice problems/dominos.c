#include<stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d%d",&m,&n);
    a=m*n;
    if(a%2==0)
    {
        b=a/2;
    }
    else
    {
        b=(a-1)/2;
    }
    printf("%d\n",b);
}
