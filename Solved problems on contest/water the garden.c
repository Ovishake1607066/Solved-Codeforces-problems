#include<stdio.h>
int main()
{
    int t,n,k,x,i,j,l,b,s=0,c=0,c1=0,c2=0,c3=0,m,xi;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&k);
        int a[200];
        scanf("%d",&x);
        for(j=0; ;j++)
        {
            for(l=0;l<k;l++)
            {
                if(j==0)
                {
                    a[l]=x;
                }
                else
                {
                    a[l]=x-l;
                    a[l+1]=x+1;
                    l++;
                }
            }
            for(m=0;m<k;m++)
            {
                //printf("%d\n",a[m]);
                if(a[m]==1)
                {
                    c1=1;
                }
                if(a[m]==n)
                {
                    c2=1;
                }
                if(c1==1 && c2==1)
                {
                    printf("%d\n",j+1);
                    c3=1;
                    break;
                }
            }
            if(c3==0)
            {
                k=k+k;
            }
            if(c3==1)
                break;
        }
    }
}
