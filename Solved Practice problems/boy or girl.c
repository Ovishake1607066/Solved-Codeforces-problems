#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,co,cou;
    char s[110],c;
    scanf("%s",s);
    cou=0;
    for(i=0;s[i]!='\0';i++)
    {
        c=s[i];
        co=0;
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[j]==c)
            {
                co=co+1;
            }
        }
        if(co<1)
        {
            cou=cou+1;
        }

    }
    if(cou%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
}
