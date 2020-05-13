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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a=0,b=0,c=-10000000000,d=-10000000000,e;
        for(ll i=0; i<n; i++)
        {
            ll f,h;
            cin>>f>>h;
            c=max(c,f);
            d=max(d,f-h);
        }
        if(c>=x)
        {
            cout<<1<<endl;
        }
        else      if(d<=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            if((x-c)%d==0)
                e=(x-c)/d;
            else
                e=((x-c)/d)+1;
            cout<<max(e+1,2LL)<<endl;
        }
    }


}

