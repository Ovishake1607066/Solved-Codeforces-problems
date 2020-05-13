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
bool sortbysec(const pair<pair<ll,ll>,ll> &a,
               const pair<pair<ll,ll>,ll> &b)
{
    return (a.second < b.second);
}
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll a1=0,a2=1;
    mark[0]=0;
    mark[1]=1;
    for(ll i=2;i<100;i++)
    {
       mark[i]=((mark[i-1])%10+(mark[i-2])%10)%10;;
    }
    ll t;
   // cout<<64%60<<endl;
    cin>>t;
    for(ll j=0;j<t;j++)
    {
        ll n;
        cin>>n;
        ll a=1;
        for(ll i=1;i<100;i++)
        {
            a=a*2;
            if(a>n)
            {
                ll x=a/2;
                x--;
                ll y=x%60;
                cout<<mark[y]<<endl;
                break;
            }
        }
    }


}

