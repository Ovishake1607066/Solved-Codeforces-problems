#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,a,b,i,c=0;
    cin>>x>>y;
    b=y-1;
    a=b;
    if((y==0) ||(y==1 && x!=0))
    {
        cout<<"No";
        c=1;
    }
    for(i=0;i<=a;i++)
    {
        if(c==1)
            break;
        if(x==0 && y==1)
        {
            cout<<"Yes";
            break;
        }
        if(x==0)
        {
            cout<<"No";
            break;
        }
        if(b==x)
        {
            cout<<"Yes";
            break;
        }
        if(b>x)
        {
            cout<<"No";
            break;
        }
        b=b+2;
        a=a+2;
    }
}
