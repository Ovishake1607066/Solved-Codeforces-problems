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
    ll n;
    cin>>n;
    ll a[n+10],b,c=0,d=0;
    vector<ll>v,v2,v3;
    loop
    {
        cin>>a[i];
        mark[a[i]]=1;
        if(a[i]==0)
            v.push_back(i+1);
    }
    loop
    {
        if(a[i]==0 && mark[i+1]==0)
        {
            v2.push_back(i+1);
        }
    }
    for(ll i=1; i<=n; i++)
    {
        if(mark[i]==0)
            v3.push_back(i);
    }
    sort(v.begin(),v.end());
    rvs(v3);
    d=0;
    ll e=0,x=0,y=0,z=0;
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i]==v3[d])
        {
            if(d==0)
            {
                //cout<<v[i+1]<<endl;
                a[v[i+1]-1]=v3[d];
                a[v[i]-1]=v3[d+1];
                d++;
                i++;
            }
            else
            {
                a[v[i-1]-1]=v3[d];
                a[v[i]-1]=v3[y];
            }
            d++;
            continue;
        }
        a[v[i]-1]=v3[d];
        y=d;
        d++;
    }
    for(ll i=0; i<n; i++)
        cout<<a[i]<<" ";
}

