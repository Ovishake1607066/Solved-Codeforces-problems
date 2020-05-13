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
    ll n,m,a1[10000],a2[10000],b=0,c=0,d;
    cin>>n;
    loop
    {
        cin>>a1[i];
        mark[a1[i]]=1;
    }
    cin>>m;
    for(ll i=0; i<m; i++)
    {
        cin>>a2[i];
        mark[a2[i]]=1;
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            b=a1[i]+a2[j];
            if(mark[b]==0)
            {
                cout<<a1[i]<<" "<<a2[j]<<endl;
                return 0;
            }
        }
    }
}

