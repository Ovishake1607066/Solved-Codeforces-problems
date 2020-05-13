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
#define l 1000000
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
        vector<ll>v;
        vector<ll>v2;
        ll a,b,c=0,d=1e18,e=1e18;
        loop
        {
            cin>>a>>b;
            v.push_back(a);
            v2.push_back(b);
        }
        v.push_back(v[0]);
        v2.push_back(v2[0]);
        for(ll i=1;i<=n;i++)
        {
            c=c+(max(0LL,v[i]-v2[i-1]));
            d=min(d,v[i]-((max(0LL,v[i]-v2[i-1]))));
        }
        c+=d;
        cout<<c<<endl;
    }
}

