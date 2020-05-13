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
        ll n,g,b,a,c=0,d=0,e=0;
        cin>>n>>g>>b;
        if(n%2==0)
            a=n/2;
        else
            a=n/2+1;
        if(g>=n)
        {
            cout<<n<<endl;
            continue;
        }
        if(a%g==0)
        {
            c=a+((a/g)-1)*b;
            d=c-a;
            if(d<n-a)
            {
                c=c+(n-a-d);
            }
        }
        else
        {
            c=a+(((a)/g))*b;//cout<<c<<endl;
            d=c-a;
            if(d<n-a)
            {
                c=c+(n-a-d);
            }
        }
        cout<<max(c,n)<<endl;
    }
}

