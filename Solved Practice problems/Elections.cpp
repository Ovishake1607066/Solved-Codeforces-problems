#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
int main()
{
    ll n,b,c=0,d,s=0;
    sf(n);
    ll a[n];
    loop
    {
        sf(a[i]);
        c=max(c,a[i]);
        s=s+a[i];
    }
    while(1)
    {
        d=0;
        for(ll i=0; i<n; i++)
        {
            d=d+(c-a[i]);
        }
        if(d>s)
        {
            cout<<c<<endl;
            return 0;
        }
        c++;
    }
}
