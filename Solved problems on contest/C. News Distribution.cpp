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
ll mark[10000000];
ll ans[1100000];
vector<ll>v[1100000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m;
    cin>>n>>m;
    while(m--)
    {
        ll k,b,c=0;
        cin>>k;
        ll a[k];
        if(k==0)
            continue;
        for(ll i=0; i<k; i++)
        {
            cin>>a[i];
            if(mark[a[i]] && c==0)
            {
                c=1;
                b=mark[a[i]];
            }
            if(c && mark[a[i]])
            {
                v[b].push_back(a[i]);
                mark[a[i]]=b;
            }
        }
        if(c)
        {
            for(ll i=0; i<k; i++)
            {
                v[b].push_back(a[i]);
                mark[a[i]]=b;
            }
        }
        else
        {
            v[a[0]].push_back(a[0]);
            mark[a[0]]=a[0];
            for(ll i=1; i<k; i++)
            {
                v[a[0]].push_back(a[i]);
                mark[a[i]]=a[0];
            }
        }
    }
    //for(ll i=0;i<=n;i++)
    // cout<<mark[i]<<endl;
    set<ll>s;
    set<ll> :: iterator it;
    for(ll i=1; i<=n; i++)
    {
        ll xx=1;
        for(ll j=0; j<v[i].size(); j++)
        {
            if(mark[v[i][j]]==i)
                xx=1;
            else
                {
                    xx=0;
                    break;
                }
        }
        if(xx)
        {
            for(ll j=0; j<v[i].size(); j++)
            {
                s.insert(v[i][j]);
            }
            ll x=s.size();
            for(it=s.begin(); it!=s.end(); it++)
            {
                ans[*it]=x;
            }
            s.clear();
        }
    }
    for(ll i=1; i<=n; i++)
    {
        if(ans[i])
            cout<<ans[i]<<" ";
        else
            cout<<1<<" ";
    }
}

