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
ll mark[100000];
vector< vector <ll> >v(110);
int main()
{
    ll n,m,k,b,c=0,d;
    cin>>n>>m>>k;
    ll x=m+1;
    ll a1[n],a2[n];
    loop
    {
        cin>>a1[i];
    }
    loop
    {
        cin>>b;
        a2[i]=b;
        v[b].push_back(a1[i]);
        sort(v[b].begin(),v[b].end());
    }
    for(ll i=0;i<k;i++)
    {
        cin>>b;
        for(ll j=(v[a2[b-1]].size())-1;j>=0;j--)
        {
            //cout<<v[a2[b-1]].size()<<endl;
            //cout<<v[a2[b-1]][j]<<endl;
            if(v[a2[b-1]][j]==a1[b-1])
                break;
            else
                {
                    c++;
                    break;
                }
        }
        //cout<<endl;
    }
    cout<<c<<endl;
}
