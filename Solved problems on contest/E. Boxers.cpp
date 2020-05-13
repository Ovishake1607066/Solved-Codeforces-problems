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
ll mark[1000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    ll a[n+10];
    loop
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            if(mark[1]==0)
                mark[1]=1;
            else
                mark[2]=1;
        }
        else
        {
            if(mark[a[i]-1]==0)
                mark[a[i]-1]=1;
            else if(mark[a[i]]==0)
                mark[a[i]]=1;
            else
                mark[a[i]+1]=1;
        }
    }
    ll c=0;
        for(ll i=1;i<=150001;i++)
        {
            if(mark[i])
                c++;
        }
    cout<<c<<endl;
}
