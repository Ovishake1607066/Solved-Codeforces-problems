#include<stdio.h>
int main()
{
    long long int n,x,y,a=0,b=0,i,j;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&x,&y);
        if(x>0)
        {
            a=a+1;
        }
        if(x<0)
        {
            b=b+1;
        }
    }
    if(a==1 || b==1 || a==n || b==n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
