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
#define l 10000000
ll mark[5010];
long long a[10000000],prime[1000000];
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
    cin>>t;
    while(t--)
    {
        ll x,k,b=0,c=0,d=0,n;
        cin>>x>>k;
        n=x;
        while (n % 2 == 0)
        {
            b++;
            n = n/2;
            if(b>=k)
            {
                d=1;
                break;
            }
        }
        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            if(b>=k)
            {
                d=1;
                break;
            }
            while (n % i == 0)
            {
                b++;
                n = n/i;
                if(b>=k)
                {
                    d=1;
                    break;
                }
            }
        }
        if (n > 2)
            b++;
        if(b>=k)
            d=1;
        if(d==1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
