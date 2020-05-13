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
    ll n;
    cin>>n;
    ll a[n],b,c=0;
    loop
        cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<n;i+=2)
    {
        //cout<<a[i]<<endl;
        c+=a[i+1]-a[i];
        //cout<<c<<endl;
    }
    cout<<c<<endl;
}
