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
bool sortbysec(const pair<pair<ll,ll>,ll> &a,
               const pair<pair<ll,ll>,ll> &b)
{
    return (a.second < b.second);
}
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,d,e;
    //cout<<10%0<<endl;
    cin>>n>>d>>e;
    ll a1[]= {0,1,2,5,10,20,50,100};
    ll a2[]= {0,5,10,20,50,100,200};
    ll x=n,a=100000000000,b=0,c=0;
    for(ll i=0; i<8; i++)
    {
        x=n;
        if(i==0)
            x=x;
        else
        {
            if(x/(a1[i]*d))
            {
                x=(x%(a1[i]*d));
            }
            else
                x=x;
        }
        for(ll j=0; j<7; j++)
        {
            if(j==0)
                x=x;
            else
            {
                if(x/(a2[j]*e))
                    x=(x%(a2[j]*e));
                else
                    x=x;
            }
            a=min(a,x);
            cout<<x<<endl;
        }
    }
cout<<a<<endl;
}

