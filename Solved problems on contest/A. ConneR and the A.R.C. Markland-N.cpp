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
        ll n,ss,k;
        cin>>n>>ss>>k;
        set<ll>s;
        ll a[k+10],b,c=0,d=0;
        for(ll i=0; i<k; i++)
        {
            cin>>b;
            s.insert(b);
        }
        set<ll> :: iterator it=s.begin();
        for(ll i=0; ; i++)
        {
            if(ss+i<=n)
            {
                if(s.find(ss+i)==s.end())
                {cout<<i<<endl;
                    break;
                }

            }
            if(ss-i>=1)
            {
                if(s.find(ss-i)==s.end())
                {cout<<i<<endl;
                    break;
                }
            }
        }


    }
}

