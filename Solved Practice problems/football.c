#include<stdio.h>
int main()
{
    int i,j,b,c,l,m,k,g=1;
    char s[101],a;
    scanf("%s",&s);
    l=strlen(s);
    if(l<=6)
    {
        printf("NO\n");
    }
    k=0;
    for(i=0;i<(l-6);i++)
    {
        b=0;
        c=0;
        for(j=i;j<(i+7);j++)
        {
            m=s[j];
            if(m==48)
            {
                c=c+1;
                if(c==7)
                {
                    k=48+49;
                }
            }
            else if(m==49)
            {
                b=b+1;
                if(b==7)
                {
                    k=48+49;
                }
            }
        }
        if(k==97)
        {
            printf("YES\n");
            break;
        }
        if(i==(l-7))
        {
            printf("NO\n");
            break;
        }
    }
    return 0;
}
