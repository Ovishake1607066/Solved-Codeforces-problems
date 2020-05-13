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
int main()
{
    ll x,a,b,c,d=0;
    cin>>x;
    for(ll i=1;i<=x;i++)
    {
        for(ll j=1;j<=i;j++)
        {
            if(i*j>x)
            {
                if(i%j==0 && i/j<x)
                {
                    cout<<i<<" "<<j<<endl;
                    d=1;
                    return 0;
                }
            }
        }
    }
    cout<<-1<<endl;
}

