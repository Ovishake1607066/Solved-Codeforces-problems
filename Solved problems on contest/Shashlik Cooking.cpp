#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,k,a,b,c,d;
    cin>>n>>k;
    if(k==0)
    {
        cout<<n<<endl;
        for(ll i=1; i<=n; i++)
            cout<<i<<" ";
        return 0;
    }
    a=k*2+1;
    if(n%a==0)
    {
        b=n/a;
        cout<<b<<endl;
        d=k+1;
        if(d<=0)
            d=1;
        //cout<<a<<c<<d<<endl;
        for(ll i=d; i<=n; )
        {
            cout<<i<<" ";
            i=i+a;
        }
    }
    else
    {
        b=n/a+1;
        cout<<b<<endl;
        c=n-(b-1)*a;
        d=c-k+1;
        if(d<=0)
            d=1;
        //cout<<a<<c<<d<<endl;
        for(ll i=d; i<=n; )
        {
            cout<<i<<" ";
            i=i+a;
        }
    }
}
