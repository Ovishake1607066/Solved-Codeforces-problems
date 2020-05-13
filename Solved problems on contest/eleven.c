#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    a=1;
    b=2;
    for(i=1;i<=n;i++)
    {
        if(i<3)
        {
            printf("O");
        }
        else if(i==(a+b))
        {
            printf("O");
            c=b;
            b=a+b;
            a=c;
        }
        else
        {
            printf("o");
        }
    }
    return 0;
}
