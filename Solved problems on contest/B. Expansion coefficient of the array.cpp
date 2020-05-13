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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,a,b,c=100000000000,d;
    cin>>n;
    vector<pair<ll,ll> >v;
    loop
    {
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end());
    for(ll i=0; i<n; i++)
    {
            a=max(abs(v[i].second-1),abs(v[i].second-n));
            c=min(v[i].first/a,c);
            //cout<<a<<"   "<<c<<endl;
            if(v[i].second==1 || v[i].second==n)
                break;
    }
    cout<<c<<endl;
}

