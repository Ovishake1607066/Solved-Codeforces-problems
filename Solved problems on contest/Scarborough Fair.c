#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j,k,a,b,l,r;
    scanf("%d%d",&n,&m);
    char s[n],c1,c2;
    scanf("%s",s);
    for(i=0;i<m;i++)
    {
        scanf("%d %d %c %c",&l,&r,&c1,&c2);
        for(k=l-1;k<=r-1;k++)
        {
            if(s[k]==c1)
            {
                s[k]=c2;
            }
        }
    }
    printf("%s\n",s);
    return 0;

}
