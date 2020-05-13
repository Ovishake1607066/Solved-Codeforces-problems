#include<iostream>
using namespace std;
int main()
{
    int y,i,j,a,b,c,n,m,q,r,s,p;
    cin>>y;
    n=y;
    m=n;
    for(i=0; ;i++)
    {
        c=0;
        b=100;
        q=200;
        r=300;
        m=m+1;
        n=m;
        for(j=0; ;j++)
        {
            a=n%10;
            p=a;
            n=n/10;
            if(p==b || j==4 ||p==q||p==r)
            {
                break;
            }
            if(p!=b || j==0 ||p!=q ||p!=r)
                {c=c+1;
                }
            if(j==0)
            {
                b=a;
            }
            if(j==1)
                q=a;
            if(j==2)
                r=a;
        }
        if(c==4)
        {
            cout<<m;
            break;
        }
    }
}
