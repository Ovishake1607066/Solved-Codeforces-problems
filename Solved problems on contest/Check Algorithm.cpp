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
        string s;
        cin>>s;
        ll a,b,c=1,d=0,e=0,n;
        n=s.size();
        s+="1";
        for(ll i=1;i<n+1;i++)
        {
            if(s[i]==s[i-1])
            {
                c++;
            }
            else
            {
                a=c;
                d=0;
                while(a)
                {
                    a/=10;
                    d++;
                }
                e+=d;
                e+=1;
                c=1;
            }
            //cout<<e<<"  "<<n<<endl;
        }
        if(e<n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

