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
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        ll a[n+10],b=0,c=0,d=0,e=0,s[n+10];
        for(ll i=0; i<1000000; i++)
            mark[i]=0;
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        vector<ll>v;
        for(ll i=1; i<=n; i++)
        {
            ll x=a[i];
            if(!mark[a[i]])
            {
                v.push_back(x);
                while(1)
                {
                    if(x==i)
                    {
                        break;
                    }
                    x=a[x];
                    v.push_back(x);
                }
                for(ll j=0; j<v.size(); j++)
                {
                    s[v[j]]=v.size();
                    mark[v[j]]=1;
                }
                v.clear();
            }
        }
        for(ll i=1; i<=n; i++)
            cout<<s[i]<<" ";
        cout<<endl;
    }
}

