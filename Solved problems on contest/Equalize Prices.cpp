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
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+10],c=0,b=10000000000;
        loop
        {
            cin>>a[i];
            b=min(b,a[i]);
            c=max(c,a[i]);
        }
        if(abs(c-(b+k))<=abs(b-(b+k)))
            cout<<b+k<<endl;
        else
            cout<<-1<<endl;
    }
}

