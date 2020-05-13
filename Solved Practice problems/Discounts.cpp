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
ll mark[100000];
int main()
{
    ll n;
    cin>>n;
    ll a[n],m,b,c,s=0,a2[n+1];
    loop
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n,greater<int>());
    cin>>m;
    for(ll i=0;i<m;i++)
    {
        cin>>b;
        cout<<s-a[b-1]<<endl;
    }

}

