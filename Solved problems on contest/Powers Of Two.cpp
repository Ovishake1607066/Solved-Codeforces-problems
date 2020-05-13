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
vector<vector<ll> >r;
vector<ll>v;
ll n,k,a[100],b,c;
ll chk[100];
ll ch=0;
ll fun(ll x,ll s)
{
    //cout<<x<<endl;
    if(ch==1)
        return 0;
    if(s>n)
        return 0;
    if(v.size()>k)
        return 0;
    if(s==n && v.size()==k)
    {
        r.push_back(v);
        ch=1;
        return 0;
    }
    while(s+a[x]<=n && v.size()<k && x<b)
    {
        v.push_back(a[x]);
        fun(x,s+a[x]);
        x++;
        v.pop_back();
    }
}
int main()
{
    sf(n);
    sf(k);
    for(ll i=1,j=0;i<=n;i=i*2,j++)
    {
        a[j]=i;
        b=j;
    }
    fun(0,0);
    if(r.size()==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(ll i=0;i<r.size();i++)
    {
        for(ll j=0;j<r[i].size();j++)
            cout<<r[i][j]<<" ";
        break;
    }
}
