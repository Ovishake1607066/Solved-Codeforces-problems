#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d,e,f,s=10000000000000,g;
        cin>>a>>b>>c;
        for(ll i=1;i<=2*a;i++)
        {
            for(ll j=i;j<=2*b;j+=i)
            {
                for(ll k=0;k<2;k++)
                {
                    f=(c/j)*j+(k*j);
                    ll x=(abs(i-a)+abs(j-b)+abs(c-f));
                    if(x<s)
                    {
                        s=x;
                        d=i;
                        e=j;
                        g=f;
                    }
                }
            }
        }
        cout<<s<<endl;
        cout<<d<<" "<<e<<" "<<g<<endl;
    }
}

