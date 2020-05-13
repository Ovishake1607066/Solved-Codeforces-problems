#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m;
    cin>>n>>m;
    ll a1[n][m],a2[n][m],b,c=0,d;
    for(ll i=0; i<n; i++)
        for(ll j=0; j<m; j++)
            cin>>a1[i][j];
    for(ll i=0; i<n; i++)
        for(ll j=0; j<m; j++)
            cin>>a2[i][j];
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            ll x=a1[i][j];
            ll y=a2[i][j];
            a1[i][j]=max(x,y);
            a2[i][j]=min(x,y);
        }
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m-1; j++)
        {
            if(a1[i][j]>=a1[i][j+1] || a2[i][j]>=a2[i][j+1])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    for(ll i=0; i<n-1; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(a1[i][j]>=a1[i+1][j] || a2[i][j]>=a2[i+1][j])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    cout<<"Possible"<<endl;
}

