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
long long a[1000000],prime[1000000];
vector<ll>v[3000000];
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
    ll n;
    //cout<<e<<endl;
    cin>>n;
    ll b,c=0,d=1,f=0,g=0,h;
    for(ll i=0; i<n; i++)
    {
        cin>>b;
        for(ll j=0; ; j++)
        {
            c=0;
            if(prime[j]>sqrt(b))
            {
                break;
            }
            if(b%prime[j]==0)
            {
                while(b%prime[j]==0)
                {
                    c++;
                    b/=prime[j];
                }
            }
            //cout<<b<<endl;
            v[prime[j]].push_back(c);
            g=max(g,prime[j]);
        }
        if(b>1)
        {
            g=max(g,b);
            v[b].push_back(1);
        }
    }
    for(ll i=0; i<210000; i++)
    {
        //cout<<v[i].size()<<"   "<<i<<endl;
        ll y=prime[i];
        if(v[y].size()==n-1)
        {
            sort(v[y].begin(),v[y].end());
            ll x=v[y][0];
            d=d*(pow(y,x));
        }
        if(v[y].size()==n)
        {
            sort(v[y].begin(),v[y].end());
            ll x=v[y][1];
            d=d*(pow(y,x));
        }
    }
    cout<<d<<endl;
}
