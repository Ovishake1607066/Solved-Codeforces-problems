#include<stdio.h>
int main()
{
    int n,k,i,j,c,m;
    int ara[101];
    scanf("%d %d",&n,&k);
    c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        ara[k-1]=m;
        //for(i=0;i<n;i++)
        if(ara[i]>=m)
        {
            c=c+1;
            printf("%d\n",c);
        }
    }

    //printf("%d\n",c);
}
