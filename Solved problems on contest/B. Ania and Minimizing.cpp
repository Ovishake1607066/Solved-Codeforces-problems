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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll a,b=0,c=0;
    if(k==0)
    {
        cout<<s<<endl;
        return 0;
    }
    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(s[0]!='1')
    {
        s[0]='1';
        k--;
    }
    for(ll i=1; i<n && k; i++)
    {
        if(s[i]!='0')
        {
            s[i]='0';
            k--;
        }
    }
    cout<<s<<endl;

}

