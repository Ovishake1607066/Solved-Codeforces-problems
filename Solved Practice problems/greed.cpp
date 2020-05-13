#include<bits/stdc++.h>
int main()
{
    long long int a,i,j,s1,s2,s3,m,n;
    scanf("%lld",&n);
    long long int b[n],c[n];
    s1=0;
    s2=0;
    s3=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        s1=s1+a;
    }
    for(i=0;i<n;i++)
    {
        scanf("%lld",&b[i]);
        s2=s2+b[i];
    }
    if(n==2)
    {
        printf("YES\n");
    }
    else if(s2-s1>=3)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}


