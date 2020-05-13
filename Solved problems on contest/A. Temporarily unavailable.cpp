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
        ll a,b,c,r,d,e,f,g;
        cin>>a>>b>>c>>r;
        d=max(a,b);
        e=min(a,b);
        a=d-e;
        if(c>=d)
        {
            c=c-r;
            c=c-d;
            a+=c;
            a=max(0LL,a);
            cout<<min(d-e,a)<<endl;
        }
        else if(c<=e)
        {
            c=c+r;
            c=e-c;
            a+=c;
            a=max(0LL,a);
            cout<<min(d-e,a)<<endl;
        }
        else
        {
            f=c-r;
            g=c+r;
            f=f-e;
            a=0;
            if(f>0)
                a+=f;
            g=d-g;
            if(g>0)
                a+=g;
            a=max(0LL,a);
            cout<<min(d-e,a)<<endl;
        }
    }
}
