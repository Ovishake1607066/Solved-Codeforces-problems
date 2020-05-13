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
char c[60][60];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    ll a,b,d=0,e=1;;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
            cin>>c[i][j];
    }
    for(ll i=2;i<n;i++)
    {
        for(ll j=2;j<n;j++)
        {
            if(c[i][j]=='.' || c[i][j]==1)
            {
                if((c[i][j-1]=='.' || c[i][j-1]==1) && (c[i][j+1]=='.' || c[i][j+1]==1) && (c[i+1][j]=='.' || c[i+1][j]==1) && (c[i-1][j]=='.' || c[i-1][j]==1))
                {
                    if(c[i][j-1]==1 ||  c[i][j+1]==1 ||  c[i+1][j]==1 ||  c[i-1][j]==1)
                    {
                        ;
                    }
                    else
                    {
                        c[i][j]=1;
                        c[i][j-1]=1;
                        c[i][j+1]=1;
                        c[i+1][j]=1;
                        c[i-1][j]=1;
                        d=1;
                    }
                }
            }
        }
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(c[i][j]=='.')
                d=0;
        }
    }
    if(d)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

