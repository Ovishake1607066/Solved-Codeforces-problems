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
#define l 1000000
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        vector<char>v[100];
        map<ll,ll>m;
        ll a,b=0,c=0,d=0;
        string s;
        for(ll i=0; i<9; i++)
        {
            cin>>s;
            for(ll j=0;j<s.size();j++)
            {
                v[i].push_back(s[j]);
            }
        }
        for(ll i=0,j=0,ss=0;ss<3; i++,j+=3,ss++)
        {
           // cout<<i<<" "<<j<<endl;
           b=v[i][j]-48+1;
            for(ll k=b; ; k++)
            {
                ll x=(k%9)+1;
                //cout<<x<<endl;
                if(v[i][j]==(char)(x+48))
                {
                    ;
                }
                else
                {
                    b=x+1;
                    m[x]++;
                    v[i][j]=(char)(x+48);
                    break;
                }
            }
        }
        for(ll i=3,j=1,ss=0; ss<3; i++,j+=3,ss++)
        {
          // cout<<i<<" "<<j<<endl;
          b=v[i][j]-48+1;
            for(ll k=b; ; k++)
            {
                ll x=(k%9)+1;
                if(v[i][j]==(char)(x+48))
                {
                    ;
                }
                else
                {
                    b=x+1;
                    m[x]++;
                    v[i][j]=(char)(x+48);;
                    break;
                }
            }
        }
        for(ll i=6,j=2,ss=0; ss<3; i++,j+=3,ss++)
        {
           // cout<<i<<" "<<j<<endl;
           b=v[i][j]-48+1;
            for(ll k=b; ; k++)
            {
                ll x=(k%9)+1;
                if(v[i][j]==(char)(x+48))
                {
                    ;
                }
                else
                {
                    b=x+1;
                    m[x]++;
                    v[i][j]=(char)(x+48);
                    break;
                }
            }
        }
        for(ll i=0;i<9;i++)
        {
            for(ll j=0;j<9;j++)
            {
                cout<<v[i][j];
            }
            cout<<endl;
        }
    }
}
