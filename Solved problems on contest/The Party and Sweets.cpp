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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m;
    cin>>n>>m;
    ll a,b,c=0,d,e,s=0;
    multiset<ll>s1,s2;
    loop
    {
        cin>>a;
        c+=(a*m);
        s1.insert(a);
    }
    for(ll i=0; i<m; i++)
    {
        cin>>a;
        s2.insert(a);
    }
    set<ll>  :: iterator it1=s1.end(),it2=s2.begin(),it3=s1.begin();
    it1--;
    if(*it1>*it2)
    {
        cout<<-1<<endl;
        return 0;
    }
    //cout<<c<<endl;
    it2=s2.end();
    it2--;
    b=*it1;
    d=*it3;
    ll x=0;
    for(ll i=0; i<m; i++)
    {
        if(*it2>b)
        {
            c+=(*it2-*it1);
            x++;
            if(x>=m-1)
            {
                it1--;
            }
        }
        it2--;
    }
    cout<<c<<endl;

}
