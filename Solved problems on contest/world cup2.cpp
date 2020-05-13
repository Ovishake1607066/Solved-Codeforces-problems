#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,i,j,k,l,m=0,x,y,s=1,g;
    cin>>n>>a>>b;
    for(i=1; ; i++)
    {
        s=s*2;
        if(s==n)
        {
            k=i;
            break;
        }
    }
    g=n;
    for(i=0; ; i++)
    {
        n=n/2;
        if(n<2 || k<1)
            break;
        if(g==4)
        {
            if((a<=2 &&b>2)||(a>2 && b<=2))
        {
            cout<<"Final!";
            m=1;
            break;
        }
        else
        {
            cout<<1;
            m=1;
            break;
        }
    }
    if((a<=n && b>n && i==0) || (b<=n && a>n && i==0))
        {
            cout<<"Final!";
            m=1;
            break;
        }
        for(x=1,y=n; y<=g; x=x+n,y=y+n)
        {
            if((a>=x && b<=y) ||(b>=x && a<=y))
            {
                l=k;
                cout<<l<<x<<y<<endl;
                break;
            }
        }
        k--;
    }
    if(m==0)
        cout<<l;
}
