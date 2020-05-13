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
ll a[1010];
int main()
{
    ll n,r,b,c,d;
    cin>>n>>r;
    c=(2*r)-1;
    loop
    {
        cin>>b;
        if(b==1)
        {
            for(ll j=i+1-r+1; j<=i+1+r-1; j++)
            {
                if(a[n])
                    continue;
                if(j<1 || j>n)
                    continue;
                if((!a[j] || a[j]!=a[i+1-r+1] || i+1-r+1<=1))
                    a[j]=i+1;
            }
        }
    }
    //for(ll i=1;i<=n;i++)
    //cout<<a[i]<<endl;
    ll s=0;
    for(ll i=1; i<n; i++)
    {
        if(a[i]!=a[i+1])
        {
            s++;
        }
    }
    if(s)
        s++;
    else
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<s<<endl;
}
