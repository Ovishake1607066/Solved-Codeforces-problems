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
ll mark[1000000];
vector<pair<ll,ll> >v,v2;
pair<ll,ll>p;
int main()
{
    ll n,m,k,a,b,c=0;
    cin>>n>>m>>k;
    loop
    {
        cin>>a;
        p.first=a;
        p.second=i;
        v.push_back(p);
        v2.push_back(p);
    }
    sort(v2.begin(),v2.end());
    ll p=0;
    for(ll i=n-1; ;i--,p++)
    {
        if(p>=k*m)
            break;
        c+=v2[i].first;
        mark[v2[i].second]=1;
        //cout<<v2[i].second<<endl;
    }
    cout<<c<<endl;
    ll x=0,y=0;
    for(ll i=0;i<k-1 && x<n;x++)
    {
        if(mark[x])
            y++;
        if(y==m)
        {
            cout<<x+1<<endl;
            y=0;
            i++;
        }
    }

}

