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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,a,b,c=0,d=0,e=0,f=0;
        cin>>n>>m;
        vector<ll>v1(n+10),v2,v3,v4(n+10);
        for(ll i=0; i<n+10; i++)
        {
            v1[i]=0;
            v4[i]=0;
        }
        loop
        {
            cin>>a;
            v2.push_back(a);
            v4[a]=i;
        }
        for(ll i=0; i<m; i++)
        {
            cin>>a;
            v3.push_back(a);
        }
        for(ll i=0; i<m; i++)
        {
            if(v1[v3[i]]==1)
            {
                c+=1;
                f++;
                continue;
            }
            ll x=v4[v3[i]];
            x-=f;
            c=c+(2*x)+1;
            x+=f;
            if(x>e)
            {
                for(ll j=e;j<=x;j++)
                {
                    v1[v2[j]]=1;
                }
                e=x;
            }
            f++;
            //cout<<x<<"  "<<f<<endl;
            //cout<<c<<endl;
            //cout<<v2.size()<<endl;
        }
        cout<<c<<endl;
    }

}

