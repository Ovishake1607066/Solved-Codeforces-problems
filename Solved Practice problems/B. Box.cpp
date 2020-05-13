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
ll mark[10000010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+10],b=0,c=0,d=0,e=0;
        ll ans[n+10];
        vector<ll>v;
        loop
        {
            cin>>a[i];
            if(!mark[a[i]] || i==0)
            {
                ans[i]=a[i];
                mark[a[i]]=1;
            }
            else
            {
                ans[i]=-2;
            }
        }
        for(ll i=1;i<=n;i++)
        {
            if(!mark[i])
                v.push_back(i);
        }
        ll x=0;
        for(ll i=0;i<n;i++)
        {
            if(ans[i]==-2)
            {
                ans[i]=v[x];
                x++;
            }
        }
        for(ll i=0;i<n;i++)
        {
            b=max(b,ans[i]);
            if(b!=a[i])
            {
                c=1;
                break;
            }
        }
        if(c)
            cout<<-1<<endl;
        else
        {
            for(ll i=0;i<n;i++)
                cout<<ans[i]<<" ";
                cout<<endl;
        }
        for(ll i=0;i<=n;i++)
            mark[i]=0;
    }

}

