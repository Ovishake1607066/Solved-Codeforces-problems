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
#define md 1000000007
ll F(ll N,ll P)
{
	if(P==0) return 1;
	if(P%2==0)
	{
		ll ret=F(N,P/2);
		return ((ret%md)*(ret%md))%md;
	}
	else return ((N%md)*(F(N,P-1)%md))%md;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll x1,x,n;
    cin>>x1>>n;
    x=x1;
    vector<ll>v;
    for(ll i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            v.push_back(i);
            while(x%i==0)
            {
                x/=i;
            }
        }
    }
    if(x!=1)
        v.push_back(x);
        ll s=1;
    for(ll i=0; i<v.size(); i++)
    {
        ll a=v[i];
        ll c1=0,c2=n,c3;
        while(c2)
        {
            c1+=(c2/a);
            c2/=a;
        }
        s=((s%md)*(F(a,c1))%md)%md;
    }
    cout<<s<<endl;

}

