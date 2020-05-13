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
    ll a,b,c,d,e,f,g=0,s=0,q=1000000000;
    cin>>a>>b>>c>>d>>e>>f;
    if(e>=f)
    {
        ll x=min(a,d);
        s+=(x*e);
        a-=x;
        d-=x;
        q=min(b,c);
        q=min(q,d);
        s+=(q*f);
        cout<<s<<endl;
    }
    else
    {
        q=min(b,c);
        q=min(q,d);
        s+=(q*f);
        b-=q;
        c-=q;
        d-=q;
        ll x=min(a,d);
        s+=(x*e);
        cout<<s<<endl;
    }
}

