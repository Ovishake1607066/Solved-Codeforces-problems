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
    ll n;
    cin>>n;
    vector<ll>v[n+10];
    ll a=0,b,c=n*n;
    for(ll i=1; i<=c;)
    {
        if(a==0)
        {
            for(ll j=1; j<=n; j++,i++)
            {
                v[j].push_back(i);
            }
            a=1;
        }
        else
        {
            for(ll j=n;j>=1;j--,i++)
            {
                v[j].push_back(i);
            }
            a=0;
        }
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

