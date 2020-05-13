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
ll mark[5010],n,z=-1;
vector<pair<ll,ll> >v;
bool ValueCmp( const pair<ll,ll> & a1,  const pair<ll,ll> & b1)
{

    return a1.first-a1.second>b1.first-b1.second;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll d,f,g,e,s=0;
    cin>>n;
    loop
    {
        cin>>f>>d;
        v.push_back(make_pair(f,d));
    }
    sort(v.begin(),v.end(), ValueCmp);
    //sort(c1, c1 + n, ValueCmp2);
    for(ll i=0;i<n;i++)
    {
        //cout<<c1[i].a<<"    "<<c1[i].b<<endl;
        s+=(v[i].first)*(i)+(v[i].second)*(n-i-1);
    }

    cout<<s<<endl;

}

