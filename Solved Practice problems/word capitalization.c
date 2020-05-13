#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a;
    char s[1001];
    scanf("%s",&s);
    a=strlen(s);
    if(s[0]>=97&&s[0]<=123)
    {
        s[0]=s[0]-32;
    }
    printf("%s\n",s);
}
