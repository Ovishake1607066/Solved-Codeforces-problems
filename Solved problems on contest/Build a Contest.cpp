#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
int main()
{
    ll n,m,a,b,c;
    cin>>n>>m;
    set<ll>s;
    set<ll> :: iterator it=s.begin();
    set<ll> :: iterator itr=s.end();
    itr--;
    for(ll i=0;i<m;i++)
    {
        cin>>a;
        s.insert(a);
        if(s.size()==n && *it==1 && *itr==n)
            {
                cout<<1;
                s.clear();
            }
        else
            cout<<0;

    }
}
