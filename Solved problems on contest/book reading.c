#include<stdio.h>
int main()
{
    int i,j,c,n,b;
    long long int t;
    scanf("%d%lld",&n,&t);
    int a[n];
    c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=86400-a[i]+c;
        if(c>=t)
        {
            printf("%d\n",i+1);
            break;
        }

    }
    return 0;

}
