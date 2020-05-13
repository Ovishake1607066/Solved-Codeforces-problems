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
ll mark[5010],a[1000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,f[11002],b,c;
    cin>>n;
    string s,s2;
    cin>>s;
    for(ll i=1; i<=9; i++)
        cin>>f[i];
    ll xx=0;
    for(ll i=0; i<s.size(); i++)
    {
        if(xx==2)
        {
            a[i]=((ll)s[i])-48;
            continue;
        }
        if(f[((ll)s[i])-48]==(((ll)s[i])-48) && xx==1)
        {
            a[i]=a[i]=(ll)f[(ll)s[i]-48];
            xx=1;
        }
        else if(f[((ll)s[i])-48]>(((ll)s[i])-48))
            {
               a[i]=(ll)f[(ll)s[i]-48];
               xx=1;
            }
        else if(f[((ll)s[i])-48]<=(((ll)s[i])-48))
            {
                a[i]=((ll)s[i])-48;
                if(xx)
                    xx=2;
            }

    }
    for(ll i=0; i<s.size(); i++)
        cout<<a[i];
}

