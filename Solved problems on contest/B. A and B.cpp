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
        ll a,b,c=0,d=0,e=0,f=0;
        cin>>a>>b;
        d=max(a,b)-min(a,b);
        if(d==0)
        {
            cout<<0<<endl;
            continue;
        }
        c=((sqrt(1+(8*d)))-1)/2;
        ll x=(1+8*d);
        ll y=((ll)sqrt(1+(8*d)))*((ll)sqrt(1+(8*d)));
        //cout<<x<<"    "<<y<<endl;
        if(x==y)
        {
            cout<<c<<endl;
            continue;
        }
        while(1)
        {
            c++;
            ll x=(c*c+c)/2;
            if((x-d)%2==0)
            {
                break;
            }
        }
        cout<<c<<endl;
    }
}

