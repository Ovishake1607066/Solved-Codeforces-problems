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
    ll a[n+10],b[n+10],c=0,d=0,e=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<n; i++)
    {
        cin>>b[i];
    }
    while(c<n && d<n)
    {
        if(mark[a[d]]==1)
        {
            while(mark[a[d]]==1)
            {
                d++;
            }
            continue;
        }
        if(b[c]!=a[d])
        {
            mark[b[c]]=1;
            e++;
            c++;
            //cout<<c<<" "<<d<<endl;
        }
        else
        {
            mark[b[c]]=1;
            c++;
            d++;

        }
    }
    cout<<e<<endl;
}

