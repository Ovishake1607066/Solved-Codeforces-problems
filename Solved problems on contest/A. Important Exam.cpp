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
ll mark[1010][100];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m;
    cin>>n>>m;
    for(ll i=0; i<n; i++)
    {
        string s;
        cin>>s;
        for(ll k=0; k<s.size(); k++)
        {
                mark[k][(ll)s[k]]++;
                //cout<<mark[i][(ll)s[j]]<<endl;
        }
    }
    ll a[m+10],s=0,c=0;
    for(ll i=0; i<m; i++)
        cin>>a[i];
    for(ll i=0; i<m; i++)
    {
        ll mx=0;
        for(ll j=65; j<70; j++)
        {
            mx=max(mx,mark[i][j]);
            //cout<<mark[i][j]<<endl;
        }
        //cout<<mx<<endl;
        s+=a[c]*mx;
        c++;
    }
    cout<<s<<endl;
}
