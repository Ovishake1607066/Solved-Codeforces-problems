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
ll a[55][55],b[55][55];
vector<ll>v;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m;
    cin>>n>>m;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
            cin>>a[i][j];
    }
    for(ll i=1; i<n; i++)
    {
        for(ll j=1; j<m; j++)
        {
            if(a[i][j]==1)
            {
                if((a[i+1][j]==1) && (a[i][j+1]==1) && (a[i+1][j+1]==1))
                {
                    v.push_back(i);
                    v.push_back(j);
                    b[i][j]=1;
                    b[i+1][j]=1;
                    b[i+1][j+1]=1;
                    b[i][j+1]=1;
                    //cout<<i<<" "<<j<<endl;
                }
                else if(b[i][j]==1)
                {
                    ;
                }
            }
        }
    }
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
        {
            if(a[i][j]!=b[i][j])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<v.size()/2<<endl;
    for(ll i=0; i<v.size(); i+=2)
    {
        cout<<v[i]<<" "<<v[i+1]<<endl;
    }
}
