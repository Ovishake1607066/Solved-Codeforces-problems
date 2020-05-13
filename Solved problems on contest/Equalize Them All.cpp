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
    ll n;
    cin>>n;
    ll a[n],b,c=0,d=0,e,f;
    loop
    {
        cin>>a[i];
        mark[a[i]]++;
    }
    for(ll i=0; i<210000; i++)
    {
        b=mark[i];
        if(b>c)
        {
            d=i;
            c=b;
        }
    }
    cout<<n-c<<endl;
    for(ll i=0; i<n; i++)
    {
        if(a[i]==d)
        {
            for(ll j=i-1; j>=0; j--)
            {
                if(a[j]==d)
                    continue;
                if(a[j]>d)
                    cout<<2<<" "<<j+1<<" "<<j+2<<endl;
                else
                    cout<<1<<" "<<j+1<<" "<<j+2<<endl;
            }
            for(ll j=i+1; j<n; j++)
            {
                if(a[j]==d)
                    continue;
                if(a[j]>d)
                    cout<<2<<" "<<j+1<<" "<<j<<endl;
                else
                    cout<<1<<" "<<j+1<<" "<<j<<endl;
            }
            break;
        }

    }

}

