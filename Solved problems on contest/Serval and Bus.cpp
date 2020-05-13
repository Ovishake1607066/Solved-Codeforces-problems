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
    ll n,t,a,b,c,m=10000000,ans=0;;
    cin>>n>>t;
    ll a1[n],a2[n];
    loop
    {
        cin>>a1[i]>>a2[i];
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0; ;j++)
        {
            if(a1[i]>=t)
                {
                    //cout<<a1[i]<<endl;
                    if(a1[i]<m)
                    {
                        ans=i+1;
                        m=a1[i];
                    }
                    break;
                }
            else
                a1[i]=a1[i]+a2[i];
        }
    }
    cout<<ans<<endl;
}

