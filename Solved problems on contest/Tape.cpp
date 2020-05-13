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
    ll n,m,k,b,c=0;
    cin>>n>>m>>k;
    vector<ll>v;
    for(ll i=0; i<n; i++)
    {
        cin>>b;
        if(i==0)
        {
            //v.push_back(1);
            c=b;
            continue;
        }
        v.push_back(b-c);
        c=b;
    }
    sort(v.begin(),v.end());
    ll x=n-k;
    ll s=0;
    for(ll i=0; i<x; i++)
        s+=v[i];
    s+=k;
    cout<<s<<endl;
}

