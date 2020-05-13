
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
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<s<<endl;
        return 0;
    }
    ll a=1,b=1,c=1,d,f=1;
    for(ll i=0;i<s.size();i++)
    {
        a=a*(s[i]-'0');
    }
    for(ll i=0;i<s.size()-1;i++)
        f=f*9;
    a=max(a,f);
    for(ll i=0;i<s.size();i++)
    {
        c=s.size()-i-1;
        d=pow(9,c);
        a=max(a,(b*(s[i]-'1')*d));
        b=b*(s[i]-'0');
    }
    cout<<a<<endl;
}
