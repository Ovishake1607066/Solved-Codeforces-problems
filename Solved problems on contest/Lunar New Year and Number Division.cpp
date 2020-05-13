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
    ll n,b,c=0,d;
    cin>>n;
    ll a[n];
    loop
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=0,j=n-1;i<n/2 && j>=n/2;i++,j--)
    {
        //cout<<a[i]<<endl;
        //cout<<a[j]<<endl;
        c=c+(a[i]+a[j])*(a[i]+a[j]);
    }
    cout<<c<<endl;
}

