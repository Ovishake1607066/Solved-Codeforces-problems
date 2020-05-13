#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,i,j,k=1,l,m=0,x,y,s=1,g,p=0;
    cin>>n>>a>>b;
    g=n;
    n=n/2;
    for(i=0; ;i++)
    {
        s=s*2;
        if((a<=n && b>n) || (b<=n && a>n))
        {
            cout<<"Final!";
            m=1;
            break;
        }
        else
        {
            for(j=1,x=s;x<=g;x=x+s,j=j+s)
            {
                if(a<=x && a>=j &&b<=x && b>=j)
                {
                l=k;
                p=1;
                break;
                }
            }
        }
        if(p==1)
            break;
        k++;
    }
    if(m==0)
        cout<<l;
}
