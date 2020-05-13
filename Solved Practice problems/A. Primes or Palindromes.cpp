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
#define l 10000003
ll mark[5010];
long long a[10000000],prime[10000003];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
        ll e;
    for(ll i=3;i*i<=l;i+=2)
        if(a[i]==0)
            for(ll j=i*i;j<=l;j=j+(i*2))
                a[j]=1;
    prime[1]=2;
    for(ll i=3,j=2;i<=l;i+=2)
        if(a[i]==0)
    {
        prime[j++]=i;
        e=j;
    }
    ll p,q,b=0,c=0,d=0,f=1;
    cin>>p>>q;
    vector<ll>v;
    for(ll i=1;i<10000000;i++)
    {
        if(i==prime[f])
        {
            b+=1;
            f++;
        }
        ll x=i;
        ll y=0,z=0;
        while(x)
        {
            y*=10;
            y+=x%10;
            x/=10;
        }
        if(y==i)
            c+=1;
        if(b<=(p/(double)q)*c)
            {
                //cout<<i<<endl;
                v.push_back(i);
                d=max(i,d);
            }
        //cout<<i<<" "<<b<<"  "<<c<<endl;
        //cout<<(p/(double)q)*c<<endl;
    }
    cout<<v[v.size()-1]<<endl;

}
