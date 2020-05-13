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
    ll a[n],s=n-1;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n-1;i++)
    {
        map<ll,ll>m;
        ll b=n,c=0;
        for(ll j=0;j<i;j++)
        {
            m[a[j]]++;
            if(m[a[j]]>1)
            {
                c=1;
                break;
            }
        }
        if(!c)
        {
            for(ll j=n-1;j>=i;j--)
            {
                m[a[j]]++;
                if(m[a[j]]==1)
                    b=j;
                else
                    break;
            }
            //cout<<i<<" "<<b<<endl;
            s=min(s,b-i);
        }
        m.clear();
    }
    cout<<s<<endl;


}


