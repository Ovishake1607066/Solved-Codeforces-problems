#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,j,b,c=0,e=0,f=0,k,a[1000],g=0;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        b=a[i];
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if((abs(a[j]-b)<=d))
            {
                e=0;
                for(k=0;k<n;k++)
                {
                    if((a[k]>=a[j] && a[k]<=b) || (a[k]>=b && a[k]<=a[j]))
                       {
                           e=e+1;
                       }
                }
                if(e>c)
                {
                    c=e;
                    f=1;
                }
            }
        }
    }
    if(n==1)
        cout<<0;
    else if(f==0)
        cout<<(n-1);
    else if(d==0 && f==0)
        cout<<(n-1);
    else
        cout<<n-c;
}
