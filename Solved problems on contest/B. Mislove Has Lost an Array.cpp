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
    ll n,l,r,s1=0,s2=0,a=1,b=1;
    cin>>n>>l>>r;
    for(ll i=0;i<l;i++)
    {
        s1+=a;
        a*=2;
    }
    s1+=(n-l);
    for(ll i=0;i<r;i++)
    {
        s2+=b;
        b*=2;
    }
    b/=2;
    s2+=(n-r)*b;
    cout<<s1<<" "<<s2<<endl;

}

