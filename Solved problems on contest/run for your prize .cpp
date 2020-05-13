#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,a,b=0,c=0,d=0,e;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a<=(1000000/2))
        {
                b=a-1;
        }
        else
        {
            if(d==1)
                continue;
            c=1000000-a;
            d=1;
        }
    }
    if(b>=c)
        cout<<b;
    else
        cout<<c;
    return 0;
}
