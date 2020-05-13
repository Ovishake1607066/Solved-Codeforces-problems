#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    int a[n];
    c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            c=c+1;
        }
        if(a[i]<a[i-1]&& a[i]<a[i+1])
        {
            c=c+1;
        }
    }
    printf("%d\n",c);
}
