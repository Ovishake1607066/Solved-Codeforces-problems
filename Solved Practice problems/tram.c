#include<stdio.h>
int main()
{
    int n,i,j,a,b,c;
    scanf("%d",&n);
    c=0;
    j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        c=c-a;
        c=c+b;
        if(c>j)
        {
            j=c;
        }
    }
    printf("%d\n",j);
}
