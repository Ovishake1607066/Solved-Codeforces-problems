#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m],b,c=0,d=0,e=0,f=1000000,ma=0,mi=1000000,di;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]>ma)
            ma=a[i];
        if(a[i]<mi)
            mi=a[i];
    }
    di=ma-mi;
    for(int i=0;i<m;i++)
    {
        c=0;
        d=0;
        e=0;
        for(int j=0;j<=di;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(i==k)
                    continue;
                if(c==n-1)
                {
                    d=1;
                    break;
                }
                if((a[i]-a[k])==j)
                {
                    c++;
                    e=(a[i]-a[k]);

                }
            }
            if(d==1)
                {
                    break;
                }
        }
        if(e<f && c==n-1)
            {
                f=e;
            }
    }
    cout<<f<<endl;
}
