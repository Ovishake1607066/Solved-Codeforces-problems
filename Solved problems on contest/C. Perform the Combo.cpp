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
ll mark[10000000],m2[10000000];
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
        string s;
        cin>>s;
        ll a[m+10],b=0,c=0,d=0,e=0;
        for(ll i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a,a+m);
        for(ll i=0;i<n;i++)
        {
            mark[(ll)s[i]]++;
            m2[i]=(ll)s[i];
        }
        for(ll i=0;i<m;i++)
        {
            //cout<<b<<endl;
            if(i!=0)
            {
                if(a[i]==a[i-1])
                    continue;
            }
            for(ll j=b;j<a[i] && j<n;j++)
            {
                mark[m2[j]]+=(m-i);
            }
            b=a[i];
        }
        for(ll i=97;i<=122;i++)
            cout<<mark[i]<<" ";
        cout<<endl;
        for(ll i=0;i<150;i++)
        {
            mark[i]=0;
            m2[i]=0;
        }
        for(ll i=0;i<n+10;i++)
            m2[i]=0;
    }
}
