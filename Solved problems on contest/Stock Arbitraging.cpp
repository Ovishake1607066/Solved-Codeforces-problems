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
    ll n,m,r;
    cin>>n>>m>>r;
    ll a1[n],a2[m],b,c=0,d=0;
    loop
    {
        cin>>a1[i];
    }
    for(ll i=0;i<m;i++)
        cin>>a2[i];
    sort(a1,a1+n);
    sort(a2,a2+m);
    b=a1[0];
    c=r/b;
    d=r%b;
    if(((c*a2[m-1])+d)>r)
        cout<<(c*a2[m-1])+d<<endl;
    else
        cout<<r<<endl;

}
