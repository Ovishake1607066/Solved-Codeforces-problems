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
ll mark[10000000];
ll par[10000000];
ll fin(ll x)
{
    if(par[x]==x)
        return x;
    else
        return fin(par[x]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m,k,a,b,c,d;
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
    {
        par[i]=i;
        mark[i]=1;
    }
    while(m--)
    {
        cin>>k;
        if(k)
        {
            cin>>a;
            k--;
            if(k==0)
                continue;
            while(k--)
            {
                cin>>b;
                d=fin(b);
                c=fin(a);
                //cout<<c<<"      "<<d<<endl;
                if(c==d)
                    continue;
                if(mark[c]>=mark[d])
                {
                    par[d]=c;
                    mark[c]+=mark[d];
                    mark[d]=0;
                }
                else
                {
                    par[c]=d;
                    mark[d]+=mark[c];
                    mark[c]=0;
                }
            }
        }
    }
    for(ll i=1;i<=n;i++)
    {
        a=fin(i);
        //cout<<a<<endl;
        //cout<<a<<endl;
        cout<<mark[a]<<" ";
    }

}

