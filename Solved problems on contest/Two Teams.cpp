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
ll mark[100000000],a2[100000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,k;
    cin>>n>>k;
    ll a[n],ans[n],b,c,d,e;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        mark[a[i]]=i;
    }
    ll y=0;

    for(ll i=n; i>=1; )
    {
        y=y%2;
        y++;
        while(mark[i]==0)
        {
            i--;
        }
        if(i<1)
            break;
        ll x=mark[i];//cout<<x<<endl;
        //cout<<x;
        ll g=0;
        for(ll j=0; j<=k; )
        {
            if(x+j+g>n)
                break;
            if(a2[x+j+g])
                {
                    g++;
                    continue;
                }
            if(x+j+g<=n)
            {
                a2[x+j+g]=y;
                mark[a[x+j+g]]=0;
            }
            //cout<<x+j<<"   "<<y<<endl;
            j++;
        }
        g=0;
        for(ll j=1; j<=k; )
        {
            if(x-j-g<1)
                break;
            if(a2[x-j-g])
                {
                    g++;
                    continue;
                }
            if(x-j-g>=1)
            {
                a2[x-j-g]=y;
                mark[a[x-j-g]]=0;
            }
             //cout<<x-j<<"    "<<y<<endl;
            j++;

        }

        i--;
    }
    for(ll i=1; i<=n; i++)
        cout<<a2[i];

}

