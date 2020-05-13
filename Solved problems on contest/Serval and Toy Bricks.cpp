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
    ll n,m,h;
    cin>>n>>m>>h;
    ll a1[m],a2[n],a3[n][m];
    for(ll i=0; i<m; i++)
        cin>>a1[i];
    for(ll i=0; i<n; i++)
        cin>>a2[i];
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>a3[i][j];
        }
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(a3[i][j]==1)
            {
                a3[i][j]=min(a1[j],a2[i]);
            }
        }
    }
        for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cout<<a3[i][j]<<" ";
        }
        cout<<endl;
    }
}

