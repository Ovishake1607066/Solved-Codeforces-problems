#include<stdio.h>
int main()
{
    int r,c,i,j,k,l,a=0,b,d;
    scanf("%d%d",&r,&c);
    char ar[r][c]={0},ch,ch2,ch3;
    for(k=1,i=0;k<=r+1;k++,i++)
    {
        for(j=0,l=1;l<=c+1;j++,l++)
        {
            if(k<=r && l<=c)
                {
                    scanf("%c",&ar[k][l]);
                    printf("%c\n",ar[k][l]);

                }
                    if(ar[i][j]=='S')
                {
                    if(ar[i+1][j]=='W' || ar[i][j+1]=='W'||ar[i-1][j]=='W'||ar[i][j-1]=='W')
                    {
                        a=1;
                    }
                    else
                    {
                        if(ar[i+1][j]!='S')
                            ar[i+1][j]='D';
                        if(ar[i][j+1]!='S')
                            ar[i][j+1]='D';
                        if(ar[i-1][j]!='S')
                            ar[i-1][j]='D';
                        if(ar[i][j-1]!='S')
                            ar[i][j-1]='D';
                    }
            }

        }
    }
    if(a==1)
        printf("No");
    else
    {
        printf("Yes");
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                //printf("%d%d",i,j);
                printf("%c",ar[i][j]);
            }
            printf("\n");
        }
    }
}
