#include<stdio.h>
int main()
{
    int n,m,a,r,s,ans,ans2;
    scanf("%d %d %d",&n,&m,&a);
    r=n*m;
    s=a*a;
    ans=(r/s)+1;
    ans2=ans+1;
    if(r%s==0){
        printf("%d",ans);
    }
    else
        {printf("%d",ans2);
        }
    return 0;
}
