#include<stdio.h>
int main()
{
    int n,i,j;
    char c[3];
    scanf("%d",&n);
    j=0;
    for(i=0;i<n;i++)
    {
        scanf("%c",&c[0]);
        scanf("%c",&c[1]);
        scanf("%c",&c[2]);
        if((c[0]=='+' && c[1]=='+' && c[2]=='X') ||(c[0]=='X' && c[1]=='+' && c[2]=='+'))
        {
            j=j+1;
        }
        else if((c[0]=='-' && c[1]=='-' && c[2]=='X') || (c[0]=='X' && c[1]=='-' && c[2]=='-'))
        {
            j=j-1;
        }
    }
    printf("%d",j);
}
