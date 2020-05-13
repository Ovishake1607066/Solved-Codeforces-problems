#include<stdio.h>
int main()
{
    int v1,v2,v3,v4;
    scanf("%d%d%d%d",&v1,&v2,&v3,&v4);
    if(v3<=v4 && (2*v3)>=v4)
    {
        if((2*v1)>=v4)
        {
            printf("%d\n",v1);
        }
        else
        {
            printf("%d\n",(v1*v4));
        }
        if((2*v2)>=v4)
        {
            printf("%d\n",v2);
        }
        else{
            printf("%d\n",(v2*v4));
        }
        printf("%d\n",v3);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
