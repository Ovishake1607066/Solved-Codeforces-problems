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
        ll n;
        cin>>n;
        set<ll>s;
        ll a[n+10],b[n+10],c=0,d=0,e=0,f=0;
        loop
        {
            cin>>a[i];
        }
        loop
        {
            cin>>b[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(b[i]-a[i]<0)
            {
                e=1;
                break;
            }
            if(a[i]!=b[i])
                s.insert(b[i]-a[i]);
            if(f && a[i]!=b[i])
            {
                e=1;
                break;
            }
            if(a[i]!=b[i] && d==0)
            {
                c=b[i]-a[i];
                if(c<0)
                {
                    e=1;
                    break;
                }
                d=1;
                continue;
            }
            if(d)
            {
                if(b[i]-a[i]!=c)
                {
                    f=1;
                    continue;
                }
            }
        }
        if(s.size()>1)
            e=1;
        if(e)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
