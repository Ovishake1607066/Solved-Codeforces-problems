#include<stdio.h>
int main()
{
    char s[101],*p;
    int i,j,l,c;
    scanf("%s",&s);
    l=strlen(s);
    c=0;
    for(i=0;i<l;i++)
    {
        p=&s[i];
        if(*p=='H'||*p=='Q'||*p=='9')
        {
            c=c+1;
        }
    }
    if(c>=1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
