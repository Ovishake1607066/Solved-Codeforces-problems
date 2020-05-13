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
        ll b,p,f,h,c,a,d=0,g,z=0;
        cin>>b>>p>>f>>h>>c;
        ll x=b/2;
        if(h>c)
        {
            ll y=x-min(x,p);
            z=min(x,p)*h;
            z+=(min(y,f)*c);
        }
        else
        {
            ll y=x-min(x,f);
            z=min(x,f)*c;
            z+=(min(y,p)*h);
        }
        cout<<z<<endl;
    }
}

