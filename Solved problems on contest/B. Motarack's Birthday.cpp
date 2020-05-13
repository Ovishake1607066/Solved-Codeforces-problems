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
    ll t;
    cin>>t;
    while(t--)
    {
        //cout<<"asdasd  "<<mark[0]<<endl;
        ll n;
        cin>>n;
        ll a[n+10],b=0,c=0,d=0;
        vector<ll>v;
        loop
        {
            cin>>a[i];
        }
        for(ll i=0; i<n-1; i++)
        {
            if(a[i]!=-1 && a[i+1]!=-1 && i+1<n)
                b=max(b,abs(a[i]-a[i+1]));
            if(a[i]==-1 && a[i+1]!=-1 && i+1<n)
            {
                if(mark[i+1]==0)
                {
                    v.push_back(a[i+1]);
                    mark[i+1]=1;
                }
            }
            if(a[i]!=-1 && a[i+1]==-1 && i+1<n)
            {
                if(mark[i]==0)
                {
                    v.push_back(a[i]);
                    mark[i]=1;
                }
            }
        }
        if(v.size()==0)
        {
            cout<<max(0LL,b)<<" "<<1<<endl;
            for(ll i=0; i<n+10; i++)
            mark[i]=0;
            continue;
        }
        if(v.size()==1)
        {
            cout<<max(0LL,b)<<" "<<v[0]<<endl;
            for(ll i=0; i<n+10; i++)
            mark[i]=0;
            continue;
        }
        srt(v);
        ll x=v[0];
        ll y=v[v.size()-1];
        c=(x+y)/2;
        d=abs(y-c);
        cout<<max(d,b)<<" "<<c<<endl;
        for(ll i=0; i<n+10; i++)
            mark[i]=0;
    }
}

