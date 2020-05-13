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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,a,b=0,c=0;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n;i+=2)
        {
            ll x=0;
            string s2=s;
            if(s[i]=='(')
            {
                for(ll j=i+1;j<n;j++)
                {
                    if(s[j]==')')
                    {
                        x=j;
                        break;
                    }
                }
                v.push_back(make_pair(i+2,x+1));
                for(ll j=i+1,k=x;j<=x;j++,k--)
                {
                    s[j]=s2[k];
                }
            }
            else
            {
                for(ll j=i+1;j<n;j++)
                {
                    if(s[j]=='(')
                    {
                        x=j;
                        break;
                    }
                }
                v.push_back(make_pair(i+1,x+1));
                for(ll j=i,k=x;j<=x;j++,k--)
                {
                    s[j]=s2[k];
                }
            }
        }
        if(k!=n/2)
        {
            ll z=(k-1)*2;
            v.push_back(make_pair(z+2,n-1));
            string s2=s;
                for(ll j=z+1,k=n-2;j<n-1;j++,k--)
                {
                    s[j]=s2[k];
                }

        }
        //cout<<s<<endl;
        cout<<v.size()<<endl;
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
}

