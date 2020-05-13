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
ll printSubsequences(ll a[], ll g,ll c,ll k)
{
    /* Number of subsequences is (2**n -1)*/
    //cout<<g<<endl;
    unsigned ll opsize = pow(2, g);
    ll zz=0;
    /* Run from counter 000..1 to 111..1*/
    for (ll counter = 1; counter < opsize; counter++)
    {ll x=0,ss=0;
        for (ll j = 0; j < g; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */

            if (counter & (1<<j))
                {
                    ss+=a[j];
                    x++;
                    //cout<<j<<" j ";
                }
        }
        //cout<<ss<<endl;
        if(x==k && ss==c)
            zz++;
    }
    return zz;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,c=0;
        cin>>n>>k;
        ll a[n+10],b=n;
        loop
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<k;i++)
            c+=a[i];
        cout<<printSubsequences(a,n,c,k)<<endl;
    }
}

