#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z,i,a=0,b=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        a=a+x;
        b=b+y;
        c=c+z;
    }
    if(b==0&&a==0&&c==0)
    printf("YES");
    else
    printf("NO");
}
