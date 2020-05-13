#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll int
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
#define l 1000000
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
ll mark[5010];vector<ll>v[205];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%d",&n);
        vector<ll>v[205];
        ll a,b,c=0,d=0,e=0,f=llmin,g=0;
        loop
        {
            scanf("%d",&a);
            v[a].push_back(i);
        }
        for(ll i=1; i<=200; i++)
        {
            b=v[i].size();
            c=b/2;
            g=0;
            f=max(f,b);
            for(ll j=1; j<=c; j++)
            {
                for(ll k=1; k<=200; k++)
                {
                    d=lower_bound(v[k].begin(),v[k].end(),v[i][j-1]+1)-v[k].begin();
                    e=upper_bound(v[k].begin(),v[k].end(),v[i][b-j]-1)-v[k].begin();
                    g=max(g,(e-d)+(2*j));
                }
                f=max(f,g);
            }
            //f=max(f,g);
        }
        printf("%d\n",f);
    }
}

