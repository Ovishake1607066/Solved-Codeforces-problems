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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d=0,e=0,f=0,x,y,z;
        cin>>a>>b>>c;
        x=a;
        y=b;
        z=c;
        d=min(b,c/2);
        e+=d;
        e+=(2*d);
        b-=d;
        d=min(a,b/2);
        e+=d;
        e+=(2*d);
        d=min(x,y/2);
        f+=d;
        f+=(2*d);
        y-=(2*d);
        d=min(y,z/2);
        f+=d;
        f+=(2*d);
        cout<<max(e,f)<<endl;
    }
}

