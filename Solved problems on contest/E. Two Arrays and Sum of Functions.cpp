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
#define m 998244353
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll  n,s=0,s1=0;
    cin>>n;
    ll a[n],b[n];
    loop
    {
        cin>>a[i];
    }
    loop
    {
        cin>>b[i];
    }
    sort(b,b+n,greater<ll>());
    for(ll i=0;i<n;i++)
    {
        a[i]=a[i]*(((n-i-1)*(i+1))+i+1);
        //cout<<a[i]<<endl;
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        s=((a[i]%m)*(b[i]%m))%m;
        s1=((s1%m)+(s%m))%m;
        //cout<<a[i]<<"        "<<b[i]<<endl;
        //cout<<s<<endl;
    }
    cout<<s1<<endl;

}

