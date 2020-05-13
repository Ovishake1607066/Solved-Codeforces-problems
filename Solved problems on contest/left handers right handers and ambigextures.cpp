#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a,x,y,z,i=0,j,m;
    cin>>l>>r>>a;
    m=l;
    x=a+l;
    if(m>r)
        {
            m=r;
            i=1;
            x=a+r;
        }
    if(x==0)
        cout<<0;
    else if(i==0)
    {
        if(x<=r)
        {
            cout<<2*x;
        }
        else
        {
            if(x-r>1)
            {
                y=(x-r)/2;
                r=r+y;
                cout<<2*r;
            }
            else
                cout<<2*r;
        }
    }
    else
    {
        if(x<=l)

        {
            cout<<2*x;
        }
        else
        {
            if(x-l>1)
            {
                y=(x-l)/2;
                l=l+y;
                cout<<2*l;
            }
            else
                cout<<2*l;
        }
    }
}
