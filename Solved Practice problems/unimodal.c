#include<stdio.h>
int main()
{
    int n,i,j,c1,c2,c3;
    while(scanf("%d",&n)==1)
    {
        int ara[n];
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        c1=0;
        for(i=2;i<=n;i++)
        {
            if(ara[i]>ara[i-1])
            {
                c1=c1+1;
            }
        }
        c2=0;
        for(i=c1+2;i<=n;i++)
        {
            if(ara[i]==ara[i-1])
            {
                c2=c2+1;
            }
        }
        c3=0;
        for(i=c1+c2+2;i<=n;i++)
        {
            if(ara[i]<ara[i-1])
            {
                c3=c3+1;
                if(c3==n-c1-c2-1)
                {
                    printf("YES\n");
                    break;
                }
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
        if(c2==n-1)
            {
                printf("YES\n");
                break;
            }
        else if(c1+c2==n-1)
        {
            printf("YES\n");
            break;
        }
    }
    return 0;
}
