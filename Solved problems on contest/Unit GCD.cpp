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
#define l 1000050
long long a[1000010],prime[1000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll e;
    for(ll i=3; i*i<=l; i+=2)
        if(a[i]==0)
            for(ll j=i*i; j<=l; j=j+(i*2))
                a[j]=1;
    prime[0]=2;
    for(ll i=3,j=1; i<=l; i+=2)
        if(a[i]==0)
        {
            prime[j++]=i;
            e=j;
        }
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        vector<vector<ll> >v;
        vector<ll>vv;
        ll n,x,k,b=0,c=0;
        scanf("%lld",&n);
        vv.push_back(1);
        //cout<<v[0].size()<<endl;
        for(ll i=0; ;i++)
        {
            if(prime[i]<=n)
            {
                vv.push_back(prime[i]);
            }
            else
                break;
            //cout<<prime[i]<<endl;
        }
        ll xx=max(1LL,n/2);
        printf("%lld\n",xx);
        printf("%lld ",vv.size());
        for(ll i=0;i<vv.size();i++)
        {
            if(i==vv.size()-1)
                printf("%lld\n",vv[i]);
            else
                printf("%lld ",vv[i]);
        }
        b++;
        //cout<<b<<endl;
        for(ll i=4;i<=n;i+=2)
        {
            if(a[i+1] && i+1<=n)
            {
                //cout<<2<<" "<<i<<" "<<i+1<<endl;
                printf("2 %lld %lld\n",i,i+1);
            }
            else
            {
                //cout<<1<<" "<<i<<endl;
                printf("1 %lld\n",i);
            }
        }
    }
}

