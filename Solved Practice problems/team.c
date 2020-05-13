#include<Stdio.h>
int main()
{
    int n,i,j,c,s;
    scanf("%d",&n);
    int ara[3];
    s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ara[j]);
            if(ara[j]==1)
            {
                c=c+1;
                printf("%d",c);
            }
            if(c==2)
            {
                s=s+1;
                break;
            }
        }
        c=0;
    }
    printf("%d\n",s);

}
