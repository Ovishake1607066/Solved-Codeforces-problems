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
        for(ll i=0;i<200;i++)
            mark[i]=0;
        string s;
        string ss;
        cin>>s;
        for(ll i=s.size()-1;i>=0;i--)
        {
            if(i==0)
                mark[(ll)s[i]]++;
            else if(s[i]==s[i-1])
                i--;
            else
                mark[(ll)s[i]]++;
        }
        for(ll i=0;i<=200;i++)
        {
            if(mark[i])
                cout<<(char)i;
        }
        cout<<endl;
    }
}

