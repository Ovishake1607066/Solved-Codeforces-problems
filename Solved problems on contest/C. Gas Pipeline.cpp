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
vector<ll>v1,v2;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        v1.clear();
        ll n,a,b,c=0,d=0,e=0,f=0,g=0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        e=e+(a*n);
        e+=b;
        //cout<<e<<endl;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                e+=b;
                f=1;
                //cout<<e<<endl;
            }
            else
            {
                if(f)
                    e+=(b*3);
                else
                    e+=(b*2);
                f=0;
            }
            if(s[i]=='1')
            {
                v1.push_back(c);
                d=1;
                c=0;
            }
            else if(d)
            {
                c++;
            }
            //cout<<e<<endl;
        }
        //cout<<v1.size()<<endl;
        if(v1.size())
        {
            e+=(a*2);
            v1.push_back(0);
        }
        ll j=1;
        //cout<<e<<endl;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                if(v1[j]>0)
                {
                    ll x=v1[j]-1;
                    if(x*b>2*a)
                        e+=(2*a);
                    else
                    {
                        e+=((x)*b);
                    }
                }
                //cout<<e<<endl;
                j++;
            }
        }
        cout<<e<<endl;
    }
}

