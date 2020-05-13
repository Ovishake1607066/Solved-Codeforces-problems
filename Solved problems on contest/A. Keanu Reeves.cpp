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
    ll n;
    cin>>n;
    ll a=0,b=0;
    string s;
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
            a++;
        else
            b++;
    }
    if(a==b)
    {
        cout<<2<<endl;
        cout<<s[0]<<" ";
        for(ll i=1;i<n;i++)
            cout<<s[i];
    }
    else
    {
        cout<<1<<endl;
        cout<<s<<endl;
    }
}

