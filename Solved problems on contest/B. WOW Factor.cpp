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
ll mark[10000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    string s;
    cin>>s;
    ll a,b=0,c=0,d=0;
    for(ll i=1;i<s.size();i++)
    {

        if(s[i]=='v' && s[i-1]=='v')
        {
            c++;
            mark[i]=c;
        }
        else
            mark[i]=c;
    }
    for(ll i=1;i<s.size();i++)
    {   //cout<<s[i]<<endl;
        if(s[i]=='o')
        {
            d=d+(mark[i]*(c-mark[i]));
            //cout<<mark[i]<<" "<<d<<endl;
        }
    }
    cout<<d<<endl;
}

