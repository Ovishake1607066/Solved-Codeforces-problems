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
ll par[10000];
ll fin(ll x)
{
    if(par[x]==x)
        return x;
    else
        return fin(par[x]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,d=0;
    cin>>n;
    for(ll i=0; i<200; i++)
        par[i]=i;
    while(n--)
    {
        string s;
        cin>>s;
        ll e=0;
        ll c;
        for(ll i=0; i<s.size(); i++)
        {
            if(par[(ll)s[i]]!=(ll)s[i])
            {
                e=1;
                c=fin((ll)s[i]);
                break;
            }
        }
        if(!e)
        {
            c=(ll)s[0];
            c=fin(c);
        }
        for(ll i=0; i<s.size(); i++)
        {
            par[(ll)s[i]]=c;
            mark[(ll)s[i]]=1;
        }
    }
    for(ll i=97; i<123; i++)
    {
        if(mark[i] && par[i]==i)
            d++;
        //cout<<i<<"  "<<par[i]<<endl;
    }
    cout<<d<<endl;
}

