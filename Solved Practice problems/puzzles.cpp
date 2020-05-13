#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,f,a[1010],b,c,d,i,ma,mi;
    cin>>n>>m;
    ma=0;
    mi=10000;
    for(int i=0;i<m;i++)
        {
            cin>>a[i];
            if(a[i]>ma)
                ma=a[i];
            if(a[i]<mi)
                mi=a[i];
        }

    if(n==m)
    {
        cout<<ma-mi;
    }
    else
    {
        while(1)
        {
            for(i=0;i<m;i++)
            {
                if(a[i]>(ma-mi)/2)
                {
                    c1=c1+1;
                    k=i;
                }
                else
                    {
                        c2=c2+1;
                        l=i
                    }
                if(c1<=n || c2<=n)
                {
                    for(p=0;p<)
                }
            }
        }
    }


}
