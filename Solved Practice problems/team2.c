#include<stdio.h>
int main()
{
    int n,i,j,k,a,b,c,co;
    scanf("%d",&n);
    co=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c>=2)
        {
            co=co+1;
        }
    }
    printf("%d\n",co);
}
