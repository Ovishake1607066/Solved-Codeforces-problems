#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,length,l;
    char str[100],a,b;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        gets(str);
        length=strlen(str);
        if(length>10)
            {a=str[0];
            b=str[length -1];
            l=(length-2);
            printf("%c%d%c\n",a,l,b);
            }
        else
            printf("%s\n",str);

    }



}
