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
    ll n,m,k,b,c,d;
    cin>>n>>m>>k;
    ll a[n];
    loop
    {
        cin>>a[i];
    }
    sort(a,a+n);
    b=m/(k+1);
    c=m-b;
    c=(b*a[n-2])+(c*a[n-1]);
    cout<<c<<endl;
}

