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
    ll n,k;
    cin>>n>>k;
    ll a[n+10],s=0,b=0,c=0,a2[n+10];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n-1;i++)
    {
        a2[i]=a[i+1]-a[i];
    }
    sort(a2,a2+n-1);
    for(ll i=0;i<n-k;i++)
    {
        s+=a2[i];
        //cout<<a2[i]<<endl;
    }
    cout<<s<<endl;

}

