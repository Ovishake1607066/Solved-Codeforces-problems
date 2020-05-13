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
ll m[1000];
int main()
{
    ll n,k,a,b=0,c=0;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        m[a]++;
    }
    for(ll i=0;i<101;i++)
    {
        c=max(c,m[i]);
        if(m[i])
            b++;
    }
    if(c%k==0)
        a=c/k;
    else
        a=(c/k)+1;
    cout<<((a*k)*b)-n<<endl;
}

