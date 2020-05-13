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
vector<ll>x;
vector<ll>t;
int main()
{
    ll n,m,a,b,c;
    cin>>n>>m;
    for(ll i=0;i<n+m;i++)
    {
        cin>>a;
        x.push_back(a);
    }
    for(ll i=0;i<n+m;i++)
    {
        cin>>a;
        if(a)
        t.push_back(i);
    }
    if(m==1)
    {
        cout<<n<<endl;
        return 0;
    }
    ll r=t[0];
    for(ll i=0;i<t.size()-1;i++)
    {
        ll p=0,q=0;
        for(ll j=t[i]+1;j<t[i+1];j++)
        {
            if(x[j]-x[t[i]]<=x[t[i+1]]-x[j])
                p++;
            else
                q++;
        }
        p=r+p;
        cout<<p<<" ";
        r=q;
    }
    r=r+(n+m)-(t[t.size()-1]+1);
    cout<<r<<endl;
}
