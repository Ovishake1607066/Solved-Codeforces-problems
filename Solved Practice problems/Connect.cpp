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
ll mark[51][51];
vector<pair<ll,ll> >v;
queue<pair<ll,ll> >q;
int main()
{
    ll n,r1,r2,c1,c2;
    cin>>n>>r1>>c1>>r2>>c2;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
            cin>>mark[i][j];
    }
    ll a1[51][51]={0};
    for(ll i=r1,j=c1; ;)
    {
        if(!a1[r1][c1])
    }

}

