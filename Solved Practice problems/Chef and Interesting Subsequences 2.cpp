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
bool sortbysec(const pair<pair<ll,ll>,ll> &a,
               const pair<pair<ll,ll>,ll> &b)
{
    return (a.second < b.second);
}
long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
ll fact(ll x)
{
    ll a=1;
    for(ll i=2;i<=x;i++)
        a=a*i;
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[110],b=0,c=0,d=0,s=1;
        for(ll i=0;i<110;i++)
            a[i]=0;
        loop
        {
            cin>>b;
            a[b]++;
        }
        for(ll i=1;i<=100;i++)
        {
            if(a[i]>=k)
                {
                    //s=(fact(a[i])/((fact(k))*fact(a[i]-k)));
                    s=C(a[i],k);
                    break;
                }
            else
                k=k-a[i];
        }
        cout<<s<<endl;
    }
}


