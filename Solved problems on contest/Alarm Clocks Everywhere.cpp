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
#define l 100000
ll mark[5010];
long long a[1000000],prime[100000];
vector<ll>v1,v2;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll g=0;
    //cout<<e<<endl;
    //cout<<prime[e-1]<<endl;
    ll n,m,a,b,c,d,f;
    cin>>n>>m;
    ll a1[n],a2[m];
    loop
    {
        cin>>a1[i];
        if(i)
            g=__gcd(g,a1[i]-a1[i-1]);

    }
    for(ll i=0; i<m; i++)
        cin>>a2[i];
    for(ll i=0;i<m;i++)
    {
        if(g%a2[i]==0)
        {
            cout<<"YES"<<endl;
            cout<<a1[0]<<" "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

}

