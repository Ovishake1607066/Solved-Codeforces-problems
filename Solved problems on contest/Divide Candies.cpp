#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
int main()
{
    ll n,m,a[10000],b;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        a[i]=n/m;
    }
    for(ll i=1;i<=n%m;i++)
    {
        a[i]++;
    }
    ll ans=0;
    for(ll i=0;i<m;i++)
    {
        for(ll j=i;j<m;j++)
        {
            if((i*i+j*j)%m==0)
            {
                if(i==j)
                    ans=ans+(a[i]*a[j]);
                else
                    ans=ans+(2*a[i]*a[j]);
            }
        }
    }
    cout<<ans<<endl;

}

