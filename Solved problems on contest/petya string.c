#include<stdio.h>
#include<string.h>
int main()
{
    char s2[100]={0},s[101],d="danil",o="olya",s1="slava",a="ann",n="nikita";
    int i,j,k;
    scanf("%s",&s);
    for(i=0,j=0; ;i++,j++)
    {

        if(s[i]=='_')
        {
            i=0;
        }
        else
        {
            s2[j]=s[i];
        }
        if(strcmp(s2,d)==0 || strcmp(s2,o)==0 || strcmp(s2,s1)==0 || strcmp(s2,a)==0 || strcmp(s2,n)==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

}

