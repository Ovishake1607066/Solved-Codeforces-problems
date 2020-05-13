#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,a,c;
    char s[100];
    scanf("%s",&s);
    l=strlen(s);
    c=1;
    for(i=1;i<l;i++)
    {
        if(s[0]>=97 && s[0]<=123)
        {
            if(s[i]>=65 && s[i]<=91)
            {
                c=c+1;
            }
        }
        else if(s[i]>=65 && s[i]<=91)
        {
            c=c+1;
        }
    }
    if(c==l)
    {
        for(i=0;i<l;i++)
        {
            if(s[i]>=65 && s[i]<=91)
            {
                s[i]=s[i]+32;
            }
            else
            {
                s[i]=s[i]-32;
            }
        }
        printf("%s\n",s);
    }
    else
    {
        printf("%s\n",s);
    }

}
