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
        ll n,s;
        cin>>n>>s;
        ll a[n+10],b,c=0,d=0,e=0,f=0,g=0;
        loop
        {
            cin>>a[i];
            d+=a[i];
        }
        if(d<=s)
        {
            cout<<0<<endl;
        }
        else
        {
            for(ll i=0;i<n;i++)
            {
                if(a[i]>=c)
                {
                    g=i;
                    c=a[i];
                }
                if(e+a[i]-c<=s)
                {
                    d=g;
                }
                else
                    break;
                e=e+a[i];
            }
            cout<<d+1<<endl;
        }
    }
}

