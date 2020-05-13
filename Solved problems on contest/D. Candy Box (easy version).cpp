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
        ll n;
        cin>>n;
        ll a[n+10],b[n+10],c,d=0,e=0,f=100000000000,s=0;
        for(ll i=1;i<=n;i++)
            a[i]=0;
        for(ll i=1;i<=n;i++)
            b[i]=0;
        for(ll i=0;i<n;i++)
        {
            cin>>c;
            a[c]++;
            e=max(e,c);
            f=min(f,c);
        }
        for(ll i=f;i<=e;i++)
        {
            b[a[i]]++;
        }
        //cout<<e<<endl<<f<<endl;
        for(ll i=n;i>=1;i--)
        {
            //cout<<d<<"   "<<b[i]<<endl;
            if(b[i]+d>=1)
            {
                if(d>=0)
                    d+=(b[i]-1);
                else
                    d=0;
                s+=i;
            }
        }
        cout<<s<<endl;
    }
}

