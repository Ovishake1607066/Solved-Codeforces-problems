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
ll mark[5010];
int main()
{
    ll n,k;
    cin>>n>>k;
    ll b,c=0,d,e;
    ll a[k]= {0};
    loop
    {
        cin>>b;
        b=b%k;
        a[b]++;
    }
    c+=((a[0])/2)*2;
    //cout<<c<<endl;
    if(k%2!=0)
    {
        for(ll i=1; i<=k/2; i++)
        {
            if(a[i] && a[k-i])
                c+=(min(a[i],a[k-i]))*2;
        }
    }
    else
    {
        c+=((a[(k/2)])/2)*2;
        for(ll i=1; i<k/2; i++)
        {
            if(a[i] && a[k-i])
                c+=(min(a[i],a[k-i]))*2;
        }
    }
    cout<<c<<endl;
}
