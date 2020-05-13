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
    ll n;
    cin>>n;
    while(n--)
    {
        ll c,s,z,b=0;
        cin>>c>>s;
        if(s<=c)
            cout<<s<<endl;
        else
        {
            if(s%c==0)
            {
                ll x=s/c;
                ll g=(x*x);
                cout<<g*c<<endl;
            }
            else
            {
                b=s/c;
                ll x=s%c;
                ll e=(b*b)*(c-x);
                ll q=b+1;
                e=e+((q*q)*x);
                cout<<e<<endl;
            }
        }
    }
}
