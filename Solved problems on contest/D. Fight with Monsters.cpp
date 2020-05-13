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
    ll n,a,b,k,c=0,d=0,e=0;
    vector<ll>v;
    cin>>n>>a>>b>>k;
    ll aa[n+10];
    loop
    {
        cin>>aa[i];
        c=aa[i]%(a+b);
        //cout<<c<<endl;
        if(aa[i]<=a || (c>1 && c<=a))
            d++;
        else
            {
                if(c==0)
                    c=a+b;
                v.push_back(c);
            }
    }
    //cout<<d<<endl;
    srt(v);
    for(ll i=0;i<v.size();i++)
    {
        //cout<<v[i]<<endl;
        ll x=ceil((v[i]-a)/(a*1.0));
        if(x<=k)
        {
            d++;
            k-=x;
        }
    }
    cout<<d<<endl;

}

