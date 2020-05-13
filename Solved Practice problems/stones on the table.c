#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    char s[]={0};
    for(i=0;i<n;i++)
    {
        scanf("%c",&s[i]);
    }
    //scanf("%s",&s);
    printf("%c%c%c\n",s[1],s[2],s[3]);
    c=0;
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            c=c+1;
        }
    }
    printf("%d\n",c);
}
