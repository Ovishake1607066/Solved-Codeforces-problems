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
ll mark[10000000],a[1000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll b=1,c=1,d=0,e=0;
    a[1]=1;
    a[2]=1;
    for(ll i=3; i<=100001; i++)
    {
        a[i]=a[i-1]+a[i-2];
        cout<<a[i]<<endl;
    }
    mark[1]=0;
    mark[2]=0;
    for(ll i=3; i<=100001; i++)
    {
        ll x=a[i]+a[i-1];
        if(a[i+1]==x && __gcd(a[i],a[i-1])==1 && x%2==1)
        {
            mark[i]=mark[i]+1;
        }
        else
            mark[i]=mark[i-1];
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<mark[n]<<endl;
    }
}

