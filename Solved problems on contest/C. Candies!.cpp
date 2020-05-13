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
ll v[1000000];
//ll dp[100001][100001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
        cin>>v[i];
    for(ll i=2;i<=n;i++)
        v[i]+=v[i-1];
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        ll x=v[r]-v[l-1];
        cout<<x/10<<endl;
    }

}

