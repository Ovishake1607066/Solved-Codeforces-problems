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
priority_queue<pair<ll,ll> >p;
pair<ll,ll>pa;
int main()
{
    ll n,a,b,c1=0,c2=0,d1,d2;
    cin>>n;
    for(ll i=0; i<2*n; i++)
    {
        cin>>a;
        p.push(make_pair(-a,-i));
    }
    c1+=(-p.top().second);
    d1=(-p.top().second);
    p.pop();
    c2+=(-p.top().second);
    d2=(-p.top().second);
    p.pop();
    for(ll i=2; i<2*n; i++)
    {
        pa=p.top();
        if(i%2==0)
        {
            c1+=abs(-pa.second-d1);
            d1=-pa.second;
            //cout<<-pa.first<<" "<<-pa.second<<endl;
        }
        else
        {
            c2+=abs(-pa.second-d2);
            d2=-pa.second;
            //cout<<-pa.first<<" "<<-pa.second<<endl;
        }
        p.pop();
        //cout<<c1<<" "<<c2<<endl;
    }
    cout<<c1+c2<<endl;
}
