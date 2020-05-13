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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,x,y,b,c=0,d=0;
    cin>>n>>x>>y;
    ll a[n+10];
    loop
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        ll q=0,p=0;
        for(ll j=i-x;j<i;j++)
        {
            if(j<0)
                continue;
            if(a[j]<a[i])
            {
                q=1;
                break;
            }
        }
        if(q==0)
        {
            for(ll j=i+1;j<=i+y;j++)
            {
                if(j>=n)
                    continue;
                if(a[j]<a[i])
                {
                    q=1;
                    break;
                }
            }
        }
        if(q==0)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
}

