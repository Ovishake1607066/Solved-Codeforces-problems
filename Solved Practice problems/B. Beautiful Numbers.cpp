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
        ll n;
        cin>>n;
        vector<pair<ll,ll> >v;
        ll a,b,c=0,d=0,e=100000000000,ans[n+10];
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(make_pair(a,i+1));
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<v.size();i++)
        {
            //cout<<v[i].second<<endl;
            d=max(d,v[i].second);
            e=min(e,v[i].second);
            ll x=((d*d)+d)/2;
            ll y=((e*e)+e)/2;
            c+=v[i].second;
            if(x-y==c-e)
                ans[v[i].first]=1;
            else
                ans[v[i].first]=0;
                //cout<<d<<"   "<<e<<endl;
        }
        for(ll i=1;i<=n;i++)
            cout<<ans[i];
        cout<<endl;
    }
}

