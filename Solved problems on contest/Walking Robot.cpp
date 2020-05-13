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
    ll n,b,a,c,d,e,cnt=0;
    cin>>n>>b>>a;
    ll s[n];
    loop
    {
        cin>>s[i];
    }
    c=b;
    d=a;
    for(ll i=0;i<n;i++)
    {
        if(s[i]==1)
        {
            if(d==a)
            {
                d=max((ll)0,min(a,d-1));
                cnt++;
            }
            else if(c>=1)
            {
                c=max((ll)0,min(b,c-1));
                d=max((ll)0,min(a,d+1));
                cnt++;
            }
            else if(d>=1)
            {
                d=max((ll)0,min(a,d-1));
                cnt++;
            }
        }
        else
        {
            if(d>=1)
            {
                d=max((ll)0,min(a,d-1));
                cnt++;
            }
            else if(c>=1)
            {
                c=max((ll)0,min(b,c-1));
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

