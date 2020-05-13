#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
ll mark[5010];
int main()
{
    ll n,m;
    scanf("%lld",&n);
    scanf("%lld",&m);
    ll a[n+10],d=0;
    for(ll i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    vector<ll>v;
    sort(a,a+n);
    ll b[n+10];
    for(ll i=0;i<n;i++)
    {
        if(i<m)
            b[i]=a[i];
        else
        {
            b[i]=a[i]+b[i-m];
        }
    }
    v.push_back(0);
    for(ll i=0;i<n;i++)
    {
        v.push_back(b[i]+v[i]);
    }
    for(ll i=1;i<v.size();i++)
        cout<<v[i]<<" ";
}

