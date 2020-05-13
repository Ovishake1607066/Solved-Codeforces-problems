#include<stdio.h>
int main()
{
    int k,e,j,f,d,c,i,n,ara[100];
    scanf("%d",&n);
    d=0;
    e=0;
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%d",&ara);
        if(ara[i]==1)
        {
            c++;
        }
        if(ara[0]==0)
        {
            d=1;
        }
        /*for(j=1;j<45453;j++)
        {
            if(ara[i]==0 && ara[j]==0)
            {
                e=e+1;
            }
        }*/


    }
    f=c+d+e;
    printf("%d",f);
}
