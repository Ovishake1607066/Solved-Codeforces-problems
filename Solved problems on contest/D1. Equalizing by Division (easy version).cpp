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
ll mark[10000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,k,s=1000000000000;
    cin>>n>>k;
    ll a[n+10];
    loop
    {
        cin>>a[i];
        mark[a[i]]=1;
    }
    sort(a,a+n);
    for(ll i=0; i<=a[n-1]; i++)
    {
        ll b=0,c=0,d=0;
        for(ll j=0; j<n; j++)
        {
            ll x=0,y=a[j],z;
            while(y>i)
            {
                x++;
                y/=2;
            }
            //cout<<a[i]<<"  "<<y<<endl;
            if(y==i)
            {
                b+=x;
                c++;
                //cout<<b<<" "<<i<<" "<<a[j]<<endl;
            }
            if(c>=k)
            {
                d=1;
                break;
            }
        }
        if(d)
        {
            //cout<<b<<endl;
            s=min(s,b);
        }
    }
    if(s==1000000000000)
        cout<<0<<endl;
    else
        cout<<s<<endl;


}

