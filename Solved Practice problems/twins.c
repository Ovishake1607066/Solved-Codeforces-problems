#include<stdio.h>
int main()
{
    int n,i,j,k,b,s,d,m,p;
    scanf("%d",&n);
    int a[n+4];
    m=0;
    for(i=0,j=0,k=0;i<n;i++)
    {
        scanf("%d",&p);
        if(p>m)
        {
            for(k=0;k<n;k++)
            {
                a[k+1]=a[k];
            }
            a[0]=p;
            m=p;
            j++;
        }
        else
        {
            j++;
            a[j]=p;
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    b=0;
    for(i=0;i<n;i++)
    {
        s=0;
        b=b+a[i];
        for(j=i+1;j<n;j++)
        {
            s=s+a[j];
        }
        if(b>s)
        {
            d=i+1;
            break;
        }
    }
    printf("%d",d);
}
