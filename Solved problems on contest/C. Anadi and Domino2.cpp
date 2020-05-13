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
ll mark[10][10];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,e;
    cin>>n>>e;
    ll a,b,c=0,d=0,x=0;
    while(e--)
    {
        cin>>a>>b;
        if(mark[a][b]==0 && mark[b][a]==0)
            mark[a][b]=1;
    }
    for(ll i=1; i<=7; i++)
    {
        ll t=0;
        for(ll j=1; j<=7; j++)
        {
            if(mark[i][j])
            {
                t=1;
                break;
            }
        }
        if(t)
            c++;
    }
    if(c==7)
    {
        for(ll i=1; i<=7; i++)
        {
            for(ll j=1; j<=7; j++)
            {
                if(mark[i][j])
                    x++;
            }
        }
        cout<<min(x+1,16LL)<<endl;
    }
    else
    {
        for(ll i=1; i<=7; i++)
        {
            for(ll j=1; j<=7; j++)
            {
                if(mark[i][j])
                    x++;
            }
        }
        cout<<min(x,16LL)<<endl;
    }

}

