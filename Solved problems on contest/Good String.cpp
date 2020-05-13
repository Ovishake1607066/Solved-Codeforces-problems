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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,b=0,c=0,d=0,e=1000000,f=0,g=0;
        cin>>n;
        string s;
        cin>>s;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='>')
            {

                if(i<=n-1)
                {
                    c=(i-0);
                    f=1;
                    break;
                }
            }
        }
        for(ll i=n-1; i>=0; i--)
        {
            if(s[i]=='<')
            {

                if(i>=1)
                {
                    d=n-i-1;
                    g=1;
                    break;
                }
            }
        }
        //cout<<c<<"   "<<d<<endl;
        if(s=="<>")
            cout<<1<<endl;
        else if(f==0 && g==1)
            cout<<d<<endl;
        else if(g==0 && f==1)
            cout<<c<<endl;
        else
            cout<<min(c,d)<<endl;
    }

}

