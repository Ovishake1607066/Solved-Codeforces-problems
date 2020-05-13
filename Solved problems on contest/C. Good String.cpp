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
    ll n,a,b,c=0,d=0;
    string s,s2;
    cin>>n>>s;
    for(ll i=0; ; i++)
    {
        if(i>=s.size())
            break;
        if(i+1>=s.size())
        {
            c++;
            break;
        }
        if(s[i]==s[i+1])
        {
            c++;
        }
        else
        {
            s2+=s[i];
            s2+=s[i+1];
            i++;
        }
    }
    cout<<c<<endl;
    if(c==n)
        cout<<endl;
    else
        cout<<s2<<endl;

}

