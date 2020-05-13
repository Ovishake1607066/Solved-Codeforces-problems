#include<stdio.h>
int main()
{
    int v1,v2,v3,v4;
    scanf("%d%d%d%d",&v1,&v2,&v3,&v4);
    if(v4<=v3 && (2*v3)>=v4)
    {
        if(v4<=v1 && (2*v1)>=v4)
        {
            printf("%d\n",v1);
        }
        if(v4<=v2 && (2*v2)>=v4)
        {
            printf("%d\n",v2);
        }
        printf("%d\n",v3);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
