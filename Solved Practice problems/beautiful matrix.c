#include<stdio.h>
int main()
{
    int i,j,c,a[5][5],b,d,e,f;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                b=i;
                d=j;
            }
        }
    }
    e=2-b;
    f=2-d;
    c=abs(e)+abs(f);
    printf("%d",c);
}
