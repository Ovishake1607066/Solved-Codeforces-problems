#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b=10000,c=0,d=0,e=0;
        cin>>n;
        string s;
        cin>>s;
        vector<ll>v;
        for(ll i=0;i<s.size();i++)
        {
            ll x=(ll)s[i];
            b=min(b,x);
        }
        for(ll i=0;i<s.size();i++)
        {
            ll x=(ll)s[i];
            if(x==b)
            {
                v.push_back(i);
            }
        }
        string s1="",s2=s;
        for(ll i=0;i<v.size();i++)
        {
            //cout<<v[i]<<endl;
            s1="";
            for(ll j=v[i];j<n;j++)
            {
                s1+=s[j];
            }
            ll x=n-v[i];
            if(x%2==0)
            {
                for(ll j=0;j<v[i];j++)
                {
                    s1+=s[j];
                }
            }
            else
            {
                for(ll j=v[i]-1;j>=0;j--)
                {
                    s1+=s[j];
                }
            }
            if(s1<s2)
            {
                //out<<s1<<"  "<<s2<<endl;
                s2=s1;
                e=v[i];
            }
            //cout<<s1<<endl;
        }
        cout<<s2<<endl;
        cout<<e+1<<endl;
    }
}

