#include<bits\stdc++>
int main()
{
    long long int a,i,j,s1,s2,s3,m,n;
    scanf("%lld",&n);
    long long int b[n];
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
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((b[i]+b[j])>=s1)
            {
                s3=s3+1;
                break;
            }
        }

    }
    if(s3>=1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
