#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a1[100],a2[100],b,c=0,d,e,c1=100000000;
    cin>>n;
    b=sqrt(n);
    if(b*b==n)
    {
        cout<<c<<endl;
        return 0;
    }
    for(ll i=0; ;i++)
    {
        if(n==0)
            break;
        a1[i]=n%10;
        n=n/10;
        c=i;
    }
    for(ll i=c,j=0;i>=0;i--,j++)
        a2[i]=a1[j];
    for(ll i=c;i>=1;i--)
    {
        for(ll j=1;j<=n-i+1;j++)
        {
            d=0;
            n=0;
            c=0;
            for(ll k=d,ml=1;k<n;k++)
            {
                n=ml*n+a2[k];
                ml=ml*10;
            }
            b=sqrt(n);
            if(b*b==n)
            {
                c=n-i;
                if(c<c1)
                    c1=c;
            }
        }
    }
    if(c1!=100000000)
        cout<<c1<<endl;
    else
        cout<<-1<<endl;
}
