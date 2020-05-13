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
        ll a,b,c=0,d=0,e=0,f;
        string s,ss;
        cin>>ss;
        ll n=ss.size();
        for(ll i=0;i<n;i++)
        {
            s=ss;
            for(ll j=i;j<n;j++)
            {
                e=0;
                if(s[j]=='0')
                    s[j]='1';
                else
                    s[j]='0';
                for(ll k=1;k<n;k++)
                {
                    if(s[k]==s[k-1])
                    {
                        e++;
                    }
                    else
                    {
                        c+=e;
                        e=0;
                    }
                }
                if(e)
                    c+=e;
                //cout<<s<<" "<<c<<endl;
            }
        }
        cout<<c<<endl;
    }
}

