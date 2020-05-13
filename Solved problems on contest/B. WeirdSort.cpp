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
        ll n,m;
        cin>>n>>m;
        ll a[n+10],b,c=0,d=0,e=0,f=0;
        loop
        {
            cin>>a[i];
        }
        for(ll i=0; i<m; i++)
        {
            cin>>b;
            mark[b-1]++;
        }
        for(ll k=0; k<110; k++)
        {

            for(ll i=0; i<n-1; i++)
            {
                if(a[i]>a[i+1])
                {
                    if(mark[i])
                    {
                        d=a[i];
                        a[i]=a[i+1];
                        a[i+1]=d;
                    }
                }
            }
        }
        for(ll k=0; k<110; k++)
        {

            for(ll i=n-2; i>=0; i--)
            {
                if(a[i]>a[i+1])
                {
                    if(mark[i])
                    {
                        d=a[i];
                        a[i]=a[i+1];
                        a[i+1]=d;
                    }
                }
            }
        }
        for(ll i=0; i<n-1; i++)
            {
                //cout<<a[i]<<endl;
                if(a[i]<=a[i+1])
                    ;
                else
                {
                    c=1;
                    break;
                }
            }
        if(c)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        for(ll i=0; i<n+10; i++)
        {
            mark[i]=0;
        }
    }
}
