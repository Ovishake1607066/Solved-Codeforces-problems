#include<stdio.h>
int main()
{
    char s[100];
    int i,j,a;
    a=0;
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
        {
            a=a+1;
        }
        if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9')
        {
            a=a+1;
        }
    }
    printf("%d",a);
}
