#include<stdio.h>
int main()
{
    int x,h,m,a,b,c,d,i,e,f;
    scanf("%d%d%d",&x,&h,&m);
    a=h%10;
    b=m%10;
    e=m/10;
    if(a==7 || b==7)
    printf("0");
    else
    {
        if(b>7)
        c=b-7;
        else
        c=(10+b)-7;
            if(e==0&&a==8&&b<7)
            printf("0");
            if(x<=c)
            {
                d=(c/x);
                printf("%d",d);
            }
            else
            {
                printf("0");
            }
    }

    return 0;
}
