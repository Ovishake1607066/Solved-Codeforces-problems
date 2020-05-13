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
        ll r,b,k,a,d,x,y;
        cin>>r>>b>>k;
        if(r<b)
        {
            ll c=b;
            b=r;
            r=c;
        }
        if(r%b==0)
        {
            x=(r/b)-1;
        }
        else
        {
            x=r/b;
        }
        if(x<k)
            cout<<"OBEY"<<endl;
        else
            cout<<"REBEL"<<endl;
    }
}

