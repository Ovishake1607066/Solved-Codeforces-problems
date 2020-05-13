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
vector<ll>v;
int main()
{
    ll n,b,c=0,s=0;
    cin>>n;
    ll a[n];
    loop
    {
        cin>>a[i];
    }
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            v.push_back(a[i]+a[j]);
        }
    }
    sort(v.begin(),v.end());
    b=v[0];
    c=1;
    for(ll i=1;i<v.size();i++)
    {
        //cout<<v[i]<<endl;
        if(v[i]==b)
        {
            c++;
        }
        else
        {
            b=v[i];
            s=max(s,c);
            c=1;
        }
    }
    s=max(s,c);
    s=min(s,n/2);
    cout<<s<<endl;
}

