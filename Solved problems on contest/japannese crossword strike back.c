#include<stdio.h>
int main()
{
    int n,i,j;
    long long int x,c;
    scanf("%d%lld",&n,&x);
    int a[n];
    c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    if(c+n-1==x || c+n+1==x)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;

}
