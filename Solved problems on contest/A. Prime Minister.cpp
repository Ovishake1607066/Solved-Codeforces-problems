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
    ll n,a,b,c=0,d=0;
    cin>>n;
    vector<ll>v;
    v.push_back(1);
    cin>>a;
    c+=a;
    d+=a;
    for(ll i=2; i<=n; i++)
    {
        cin>>b;
        if(2*b<=a)
        {
            v.push_back(i);
            c+=b;
        }
        d+=b;
    }
    if(c*2>d)
    {
        cout<<v.size()<<endl;
        for(ll i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
    }
    else
    {
        cout<<0<<endl;
    }
}

