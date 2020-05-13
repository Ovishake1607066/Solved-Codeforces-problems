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
    ll n,k,a,b,c=0;
    cin>>n>>k;
    set<ll>s;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    set<ll> :: iterator it=s.begin();
    for(ll i=0;i<k;i++,it++)
    {
        if(it==s.end())
        {
            cout<<0<<endl;
            it--;
            continue;
        }
        b=*it-c;
        cout<<b<<endl;
        c+=b;
    }
}
