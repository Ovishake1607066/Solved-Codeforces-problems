#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[300]={0};
    int i,j,a,b,k,c;
    scanf("%s",&s1);
    a=strlen(s1);
    i=0,j=0,k=1;
    while(i<a)
    {
        if(s1[i]!='a' && s1[i]!='e' && s1[i]!='i' && s1[i]!='o' && s1[i]!='u' && s1[i]!='y' && s1[i]!='A' && s1[i]!='E' && s1[i]!='I' && s1[i]!='O' && s1[i]!='U' && s1[i]!='Y')
        {
            if(s1[i]>='A'&&s1[i]<='Z')
            {
                s2[j]='.';
                s2[k]=s1[i]+32;
            }
            else if(s1[i]>='a'&&s1[i]<='z')
            {
                s2[j]='.';
                s2[k]=s1[i];
            }
        }
        else
        {
            j=j-2;
            k=k-2;
        }
        i++;
        j=j+2;
        k=k+2;
    }
    printf("%s",s2);
    return 0;
}
