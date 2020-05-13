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
    ll x=1,a=0,b=0;
    if(s.size()%2==0)
    {
        cout<<s.size()/2<<endl;
    }
    else
    {
        for(ll i=s.size()-1;i>0;i--)
        {
            if(s[i]=='1')
            {
                a=1;
                break;
            }
        }
        if(a)
        cout<<(s.size()/2)+1<<endl;
        else
            cout<<s.size()/2<<endl;
    }
}
