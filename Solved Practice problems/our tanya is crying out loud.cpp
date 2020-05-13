#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a,b,c,d=0,e,f,g;
    cin>>n>>k>>a>>b;
    c=(n-1)*a;
    if(k!=1)
    while(1)
    {
        e=n%k;
        if(e==0)
        {
            f=n;
            g=n/k;
            if((d+b)<(d+((f-g)*a)))
            {
                n=g;
                d=d+b;
            }
            else
            {
                n=g;
                d=d+((f-g)*a);
            }
        }
        else
        {
            n=n-e;
            if(n==0)
                d=d+(e-1)*a;
            else
                d=d+(e*a);
        }
        if(n==1 || n==0)
            break;
    }
    if(c<=d || k==1)
        cout<<c<<endl;
    else
        cout<<d<<endl;
}
