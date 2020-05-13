#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,v,l,r,t,a,b,c,d;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld",&n,&v,&l,&r);
        a=n/v;
        b=(r/v)-((l-1)/v);
        printf("%lld\n",a-b);
    }
}
