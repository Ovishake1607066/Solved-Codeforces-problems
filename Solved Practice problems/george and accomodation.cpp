#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&p,&q);
        if(q-p>=2)
        s=s+1;
    }
    printf("%d",s);
}
