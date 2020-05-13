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
#define l 1000000
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,n,m,a,b=0,c=0;
        cin>>x>>n>>m;
        b=(m*10);
        a=x;
        if(b>=a)
            c=1;
        while(n--)
        {
            if(b>=a)
            {
                c=1;
                break;
            }
            a=(x/2)+10;
            if(b>=a)
            {
                c=1;
                break;
            }
            x=a;
        }
        if(c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

