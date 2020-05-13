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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,d,b,c,e=1e13;
        cin>>n>>x>>y>>d;
        b=abs(y-x);
        if(b%d==0)
        {
            e=min(b/d,e);
        }
        if((y-1)%d==0)
        {
            ll cc,c2;
            cc=ceil((double)(x-1)/d);
            c2=ceil((double)(y-1)/d);
            e=min(e,cc+c2);

        }
        if((n-y)%d==0)
        {
            ll cc,c2;
            cc=ceil((double)(n-x)/d);
            c2=ceil((double)(n-y)/d);
            e=min(e,cc+c2);

        }
        if(e==1e13)
            cout<<-1<<endl;
        else
            cout<<e<<endl;
    }
}

