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
        ll a[n+10],b,c=0,d=0;
        loop
        {
            cin>>a[i];
        }
        for(ll i=0;i<n-1;i++)
        {
            b=a[i];
            c=a[i+1];
            if(max(b,c)-min(b,c)>1)
            {
                d=1;
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
        if(d==0)
            cout<<"NO"<<endl;
    }
}
