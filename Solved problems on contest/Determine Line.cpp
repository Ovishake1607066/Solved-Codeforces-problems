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
ll a[110];
int main()
{
    ll n,r,b,c;
    cin>>n;
    c=n;
    while(c--)
    {
        cin>>r;
        while(r--)
        {
            cin>>b;
            a[b]++;
        }
    }
    for(ll i=0;i<101;i++)
    {
        if(a[i]>=n)
            cout<<i<<" ";
    }
}

