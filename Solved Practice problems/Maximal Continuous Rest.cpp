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
    ll n;
    cin>>n;
    ll a[n],b,c=0,d=0,e=0,s=0;
    loop
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0)
            {
                c=i;
                break;
            }
    }
    for(ll i=n-1,j=0;i>=0;i--,j++)
    {
        if(a[i]==0)
        {
            d=j;
            break;
        }
    }
    c+=d;
    //cout<<c<<endl;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0)
            {
                e=max(e,s);
                s=0;
            }
        else
            s++;
    }
    e=max(e,s);
    cout<<max(e,c)<<endl;
}

