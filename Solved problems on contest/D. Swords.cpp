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
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,b,c=0,d=0,e=0;
    cin>>n;
    ll a[n+10];
    loop
    {
        cin>>a[i];
        e=max(e,a[i]);
    }
    loop
    {
        c=__gcd(c,e-a[i]);
    }
    for(ll i=0;i<n;i++)
    {
        d=d+((e-a[i])/c);
    }
    cout<<d<<" "<<c<<endl;

}

