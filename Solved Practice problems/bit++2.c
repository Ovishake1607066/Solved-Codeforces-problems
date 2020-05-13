#include<stdio.h>
int main()
{
    int i,n,j,x;
    char c[3456];
    char d,e,f;
    scanf("%d",&n);
    x=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",&c);
        if((c[0]=='+'&&c[1]=='+'&&c[2]=='X')||(c[0]=='X'&&c[1]=='+'&&c[2]=='+'))
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }
    }
    printf("%d",x);
    return 0;
}
