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
ll mark[5010];
ll a1[505][505],a2[505][505];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m;
    cin>>n>>m;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
            cin>>a1[i][j];
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
            cin>>a2[i][j];
    }
    multiset<ll>m1,m2;
    for(ll i=0; i<n; i++)
    {
        for(ll k=i,j=0; k>=0 && j<m; k--,j++)
        {
            m1.insert(a1[k][j]);
            m2.insert(a2[k][j]);
        }
    }
    multiset<ll> :: iterator it1,it2;
    for(it1=m1.begin(),it2=m2.begin(); it1!=m1.end()&& it2!=m2.end(); it1++,it2++)
    {
        if(*it1!=*it2)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    m1.clear();
    m2.clear();
    for(ll i=0; i<m; i++)
    {
        for(ll k=n-1,j=i; k>=0 && j<m; k--,j++)
        {
            m1.insert(a1[k][j]);
            m2.insert(a2[k][j]);
        }
    }
    for(it1=m1.begin(),it2=m2.begin(); it1!=m1.end()&& it2!=m2.end(); it1++,it2++)
    {
        if(*it1!=*it2)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}

