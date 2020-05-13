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
        string s;
        ll a,b=0,c=0,d=0;
        cin>>s;
        for(ll i=0; i<2*n; i++)
        {
            ll x=0,y=0;
            if(i%2==0)
            {
                if(s[i]=='1')
                    b++;
                x=n-(i/2);
                y=x-1;
                if(b-c>x)
                {
                    d=i+1;
                    break;
                }
                if(c-b>y)
                {
                    d=i+1;
                    break;
                }
            }
            else
            {
                if(s[i]=='1')
                    c++;
                y=n-(i/2)-1;
                x=y;
                if(c-b>y)
                {
                    d=i+1;
                    break;
                }
                if(b-c>x)
                {
                    d=i+1;
                    break;
                }
            }
            // cout<<b<<"  "<<c<<"  "<<x<<"  "<<y<<endl;
        }
        if(d)
            cout<<d<<endl;
        else
            cout<<2*n<<endl;
    }
}

