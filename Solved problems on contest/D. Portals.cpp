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
ll n;
ll a1[5010],a2[5010],a3[5010],d=0,s=0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m,k;
    cin>>n>>m>>k;
    ll a,b,c;
    loop
    {
        cin>>a1[i]>>a2[i]>>a3[i];
    }
    ll u,uu;
    for(ll i=0;i<m;i++)
    {
        cin>>u>>uu;
        mark[u]=uu;
    }
    vector<ll>v,vv;
    ll gg=0;
    loop
    {
        if(k>=a1[i])
        {
            if(k==a1[i])
            {
                v.clear();
                vv.clear();
            }
            else
            {
                gg=i;
                v.push_back(i);
                vv.push_back(k+a2[i]);
            }
            k+=a2[i];
        }
        else
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    if(gg!=n-1)
        {
            v.push_back(n-1);
            vv.push_back(k);
        }
    for(ll i=0;i<v.size();i++)
    {
        //cout<<v[i]<<endl;
        ll x=mark[v[i]+1];
        if(vv[i]>1)
        {
            s+=a3[x-1];
            s+=a3[v[i]];
        }
        else
        {
            s=s+max(a3[x-1],a3[v[i]]);
        }
        //cout<<a3[x-1]<<" "<<a3[v[i]]<<endl;
    }
    cout<<s<<endl;

}

