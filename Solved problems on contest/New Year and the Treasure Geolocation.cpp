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
    ll n,a,b,c,s1=0,s2=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        s1+=a;
        s2+=b;
    }
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        s1+=a;
        s2+=b;
    }
    cout<<s1/n<<" "<<s2/n<<endl;
}
