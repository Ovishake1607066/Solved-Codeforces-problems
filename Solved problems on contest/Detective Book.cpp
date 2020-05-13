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
    ll n;
    cin>>n;
    ll a[n+10],b,c=0,d,e;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    b=0;
    for(ll i=1; i<=n; i++)
    {
        if(b==0)
            b=a[i];
        if(b<a[i])
        {
            b=a[i];
        }
        if(i==b)
        {
            c++;
            b=0;
        }
       // cout<<b<<"  "<<c<<endl;
    }
    cout<<c<<endl;
}

