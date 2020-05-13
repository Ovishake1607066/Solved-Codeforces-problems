#include<stdio.h>
int main()
{
    char s[101],t[101],u[101]={0};
    int i,j,k,l,l1;
    scanf("%s%s",&s,&t);
    l=strlen(s);
    l1=strlen(t);
    for(i=0,j=l1-1;i<l1;i++,j--)
    {
        u[i]=t[j];
    }
    k=strcmp(s,u);
    if(k==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
