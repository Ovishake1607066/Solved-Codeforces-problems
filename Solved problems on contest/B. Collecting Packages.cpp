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
        ll x,y,a,b=0,c=0,d=0;
        loop
        {
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        srt(v);
        string s="";
        for(ll i=0;i<v[0].first;i++)
            s+="R";
        for(ll i=0;i<v[0].second;i++)
            s+="U";
        for(ll i=1;i<v.size();i++)
        {
            c=v[i].first-v[i-1].first;
            d=v[i].second-v[i-1].second;
            if(c<0 || d<0)
            {
                b=1;
                break;
            }
            for(ll j=0;j<c;j++)
                s+="R";
            for(ll j=0;j<d;j++)
                s+="U";
        }
        if(b)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
}

