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
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
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
        ll a[n+10],b=0,c=0,d=0,e=0;
        map<ll,ll>m;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            m[i]=1;
        }
        for(ll i=n/2;i>=1;i--)
        {
            d=0;
            for(ll j=2; ; j++)
            {
                //cout<<j<<endl;
                b=i*j;
                //cout<<b<<" "<<i<<endl;
                if(b>n)
                    {
                        break;
                    }
                if(a[b]>a[i])
                {
                    d=max(d,m[b]);
                }
            }
            m[i]=m[i]+d;
            c=max(c,m[i]);
        }
        if(n==1)
            c=1;
        cout<<c<<endl;
    }
}

