#include<stdio.h>
int main()
{
    long long int n,a[100000],i,j,b,c=0,m=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>=m)
        {
            m=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            c=c+1;
        }
    }
    if(c%2==0)
    printf("Agasa");
    else
    printf("Conan");
    return 0;
}
