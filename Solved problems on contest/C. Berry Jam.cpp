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
        ll a[2*n+10],b=0,c=0,d=0,e=0,f=0,s=1000000000000;
        map<ll,ll>m1,m2,m3;
        for(ll i=0;i<2*n;i++)
            cin>>a[i];
        s=2*n;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1)
                b++;
            else
                c++;
            d=b-c;
            m1[d]=1;
            m2[d]=i+1;
            if(d==0)
            {
                s=2*n-i-1;
            }
        }
        //cout<<s<<endl;
        b=0;
        c=0;
        for(ll i=2*n-1,j=1;i>=n;i--,j++)
        {
            if(a[i]==2)
                b++;
            else
                c++;
            d=b-c;
            if(m1[d]==1)
            {
                e=m2[d]+j;
                s=min(2*n-e,s);
            }
            if(d==0)
            {
                e=2*n-j;
                s=min(e,s);
            }
        }
        cout<<s<<endl;
    }
}
