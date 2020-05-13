#include<stdio.h>
int main()
{
    int n,k,i,b,d,j,e;
    scanf("%d %d",&n,&k);
    int c=0;
    int ara[1000];
    for(i=1;i<=n;i++)
    {
        if(i==k)
        {
            scanf("%d",&d);
        }
        else
        {
            scanf("%d",&ara[i]);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]>=d)
        {
            if(ara[i]==0)
            {
                c=0;
                printf("%d",c);
            }
            else
            {
                c=c+1;
            }
        }
    }
    printf("%d",c);
    return 0;
}
