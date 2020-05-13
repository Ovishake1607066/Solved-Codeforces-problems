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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,b=0,c=1,d=0;
        cin>>n>>x;
        ll a[n+10];
        map<ll,ll>m;
        loop
        {
            cin>>a[i];
            m[a[i]]++;
        }
        while(1)
        {
            d=0;
            //cout<<c<<endl;
            if(m[c])
            {
                c++;
            }
            else
            {
                //cout<<c<<endl;
                m[c]=1;
                c++;
                x--;
            }
            if(x<=0)
            {
                for(ll i=c; ;i++)
                {
                    if(m[i]==0)
                    {
                        d=1;
                        cout<<i-1<<endl;
                        break;
                    }
                }
                break;
            }
        }
    }
}
