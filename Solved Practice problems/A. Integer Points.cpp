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
        ll a[n];
        ll m,c=0,d=0,c1=0,c2=0,c3=0,c4=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                c4++;
            else
                c3++;
        }

        cin>>m;
        ll b[m];
        for(ll i=0; i<m; i++)
        {
            cin>>b[i];
            if(b[i]%2==0)
                c2++;
            else
                c1++;
        }
        c+=(c2*c4);
        c+=(c3*c1);
        cout<<c<<endl;
    }
}

