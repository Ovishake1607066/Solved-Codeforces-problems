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
ll mark[100];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,a,b,c=0,d;
    string s;
    cin>>n>>s;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='L')
        {
            for(ll j=0;j<10;j++)
            {
                if(mark[j]==0)
                {
                    mark[j]=1;
                    break;
                }
            }
        }
        else if(s[i]=='R')
        {
            for(ll j=9;j>=0;j--)
            {
                if(mark[j]==0)
                {
                    mark[j]=1;
                    break;
                }
            }
        }
        else
            mark[(ll)s[i]-48]=0;
    }
    for(ll i=0;i<10;i++)
        cout<<mark[i];

}
