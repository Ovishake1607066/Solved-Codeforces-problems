#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
ll mark[5010];
ll v1,v2,v3,v4,v5,v6;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    ll a[n+10];
    loop
    {
        cin>>a[i];
    }
    loop
    {
        if(a[i]==4)
            v1++;
        else if(a[i]==8)
        {
            if(v1>v2)
                v2++;
        }
        else if(a[i]==15)
        {
            if(v2>v3)
                v3++;
        }
        else if(a[i]==16)
        {
            if(v3>v4)
                v4++;
        }
        else if(a[i]==23)
        {
            if(v4>v5)
                v5++;
        }
        else if(a[i]==42)
        {
            if(v5>v6)
                v6++;
        }
    }
    ll x=10000000000;
    x=min(x,v1);
    x=min(x,v2);
    x=min(x,v3);
    x=min(x,v4);
    x=min(x,v5);
    x=min(x,v6);
    cout<<n-(x*6)<<endl;
}

