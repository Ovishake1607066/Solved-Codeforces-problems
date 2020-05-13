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
    ll l,r;
    cin>>l>>r;
    ll a[100];
    for(ll i=l;i<=r;i++)
    {
        ll x=i;
        for(ll j=0;j<=9;j++)
            a[j]=0;
        while(x)
        {
            a[x%10]++;
            x/=10;
        }
        ll c=0;
        for(ll j=0;j<=9;j++)
        {
            if(a[j]>=2)
            {
                c=1;
                break;
            }
        }
        if(!c)
        {
                cout<<i<<endl;
                return 0;
        }
        //cout<<i<<endl;
    }
    cout<<-1<<endl;
}

