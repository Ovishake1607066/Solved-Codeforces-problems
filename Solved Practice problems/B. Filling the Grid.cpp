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
#define m 1000000007
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll h,w,b,c,d,e=0;
    cin>>h>>w;
    ll a[h+10][w+10];
    memset(a, 0, sizeof a);
    for(ll i=1;i<=h;i++)
    {
        cin>>b;
        for(ll j=1;j<=b;j++)
            a[i][j]=1;
        a[i][b+1]=2;
    }
    for(ll i=1;i<=w;i++)
    {
        cin>>b;
        for(ll j=1;j<=b;j++)
        {
            if(a[j][i]==2)
            {
                e=1;
            }
            else
                a[j][i]=1;
        }
        if(a[b+1][i]==1)
            e=1;
        else
            a[b+1][i]=2;
    }
    if(e)
    {
        cout<<0<<endl;
        return 0;
    }
    ll ans=1;
    for(ll i=1;i<=h;i++)
    {
        for(ll j=1;j<=w;j++)
        {
            if(!a[i][j])
            {
                ans=(ans%m*2%m)%m;
            }
        }
    }
    cout<<ans<<endl;


}
