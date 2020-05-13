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
ll mark[10000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,d;
        cin>>n>>k>>d;
        ll a[n],b=0,c=0,e=0,x=0,y=d,s=10000000000;
        loop
        {
            cin>>a[i];
        }
        for(ll i=0; i<d; i++)
        {
            mark[a[i]]++;
            if(mark[a[i]]>1)
                b++;
        }
        c=d-b;
        s=min(s,c);
        for(ll i=d; i<n; i++)
        {
            if(mark[a[x]]<2 && mark[a[y]]>=1 && a[x]!=a[y])
                c--;
            else if(mark[a[x]]>1 && mark[a[y]]<=0 && a[x]!=a[y])
                c++;
            else
                c=c;
            mark[a[x]]--;
            mark[a[y]]++;
            x++;
            y++;
            s=min(s,c);
            //cout<<c<<endl;
        }
        for(ll i=n-1,j=0;j<d;i--,j++)
        {
            mark[a[i]]=0;
        }
        cout<<s<<endl;
    }
}

