#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
vector<ll>v[50];
ll mark[100];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m,a,b,c=0;
    cin>>n;string s;
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        ll x=s[i]-'a';
        v[x].push_back(i+1);
    }
    cin>>m;
    while(m--)
    {
        c=0;
        cin>>s;
        memset(mark,0,sizeof(mark));
        for(ll i=0;i<s.size();i++)
        {
            ll x=s[i]-'a';
            mark[x]++;
        }
        for(ll i=0;i<26;i++)
        {
            if(mark[i])
                {
                    c=max(c,v[i][mark[i]-1]);
                    //cout<<i<<endl;
                }
        }
        cout<<c<<endl;
    }


}

