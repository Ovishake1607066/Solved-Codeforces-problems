#include<stdio.h>
int main()
{
    char s[201],t[201]={0};
    int i,j,k,l,c,m;
    scanf("%s",&s);
    l=strlen(s);
    c=0;
    for(j=0,k=0;i<l;k=k+3)
    {
        if(s[k]!='W' && s[k+1]!='U' && s[k+2]!='B')
        {
            c=c+1;
            t[j]=s[k+1];
            t[j+1]=s[k+2];
            t[j+2]=s[k+3];
            k=j+1;
            j++;
        }
        //if(s[i+c+1]=='W'||s[i+c+1]=='U'||s[i+c+1]=='B')
        {
            //t[k]="*";
        }
    }
    printf("%s",t);
}
