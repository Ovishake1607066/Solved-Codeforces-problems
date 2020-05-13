#include<stdio.h>
int main()
{
    int n,i,j,k,a[400],b,c,d;
    scanf("%d",&n);
    if(n==1)
    {
        scanf("%d",&a[0]);
        printf("%d\n",a[0]);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0,j=n,k=1;i<n;i++,j--,k++)
        {
            b=b+a[i]+a[j];
            c=c+a[n/2]
        }
    }
}
