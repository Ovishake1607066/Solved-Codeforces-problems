#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,a,b,c;
    char s[150];
    scanf("%s",&s);
    c=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='Q')
        {
            for(j=i+1;s[j]!='\0';j++)
            {
                if(s[j]=='A')
                {
                    for(k=j+1;s[k]!='\0';k++)
                    {
                        if(s[k]=='Q')
                        {
                            c=c+1;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",c);
    return 0;
}
