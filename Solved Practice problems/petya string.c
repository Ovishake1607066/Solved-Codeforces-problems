#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l1,l2,a;
    char s1[102],s2[102];
    scanf("%s%s",&s1,&s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l1;i++)
    {
        if(s1[i]>=97 && s1[i]<=123)
        {
            s1[i]=s1[i]-32;
        }
        else
        {
            s1[i]=s1[i];
        }
    }
    for(j=0;j<l2;j++)
    {
        if(s2[j]>=97 && s2[j]<=123)
        {
            s2[j]=s2[j]-32;
        }
        else
        {
            s2[j]=s2[j];
        }
    }
    a=strcmp(s1,s2);
    if(a==0)
    {
        printf("0\n");
    }
    else if(a<0)
    {
        printf("-1\n");
    }
    else
    {
        printf("1\n");
    }
}
