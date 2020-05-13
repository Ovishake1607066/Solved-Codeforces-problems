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
    ll n,p;
    cin>>n>>p;
    ll a,b,c=0;
    for(ll i=1;i<1000000;i++)
    {
        n=n+(-p);
        ll x=n;
        c=0;
        b=0;
        if((x==0 && p!=0) || (x>1000000000000000000))
        {
            cout<<-1<<endl;
            return 0;
        }
        while(x)
        {
            ll y=log2(x);
            x-=(pow(2,y));
            c++;
            b=max(b,y);
            if(x<0)
            {
                c=100000000000;
                break;
            }
            //cout<<x<<endl;
        }
        if(c==i || (c<i && b>1))
        {
            cout<<i<<endl;
            return 0;
        }
        //cout<<i<<"     "<<c<<endl;
    }
    cout<<-1<<endl;
}

