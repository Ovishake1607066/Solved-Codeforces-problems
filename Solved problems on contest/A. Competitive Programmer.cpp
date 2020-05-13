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
    ll n;
    cin>>n;
    while(n--)
    {
        string s;
        ll a,b=0,c=0,e=0;
        cin>>s;
        sort(s.begin(),s.end());
        for(ll i=0;i<s.size();i++)
        {
            b=b+(ll)s[i]-48;
            ll x=(ll)s[i]-48;
            if(x==0 && c==0)
                {
                    c=1;
                    continue;
                }
            if(x%2==0 && c)
                e=1;
        }
        if(c==1 && e==1 && b%3==0)
            cout<<"red"<<endl;
        else
            cout<<"cyan"<<endl;
    }
}

