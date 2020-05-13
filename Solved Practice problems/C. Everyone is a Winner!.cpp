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
        ll n,a,b,c=0,d=0;
        cin>>n;
        set<ll>s;
        b=sqrt(n);
        for(ll i=1;i<=b;i++)
        {
                s.insert(i);
                s.insert(n/i);
        }
        s.insert(0);
        set<ll> :: iterator it;
        cout<<s.size()<<endl;
        for( it=s.begin();it!=s.end();it++)
            cout<<*it<<" ";
        cout<<endl;
    }
}

