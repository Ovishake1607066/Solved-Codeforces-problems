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
    ll n,k,a,b,c,x,d;
    cin>>n>>k;
    for(ll i=1;i<k;i++)
    {
        if(n%i==0)
        {
            a=i;
        }
    }
    b=n/a;
    //cout<<a<<endl<<b<<endl;
    x=b*k+a;
    cout<<x<<endl;
}
