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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        ll a,b,c,x=1000,y=1000,p=0,q=0,r=0;
        string s1="",s2="";
        cin>>s;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                s1+="0";
                s2+="0";
                x=0;
                y=0;
            }
            else if(s[i]=='1')
            {
                if(p==0)
                {
                    s1+="0";
                    s2+="1";
                    x=0;
                    y=1;
                    p=1;
                }
                else
                {
                    s1+="1";
                    s2+="0";
                    x=1;
                    y=0;
                    q=1;
                }

            }
            else
            {
                if(p)
                {
                    s1+="2";
                    s2+="0";
                    x=2;
                    y=0;
                    p=1;
                }
                else if(x==y)
                {
                    s1+="1";
                    s2+="1";
                    x=1;
                    y=1;
                }
            }
        }
        cout<<s1<<endl<<s2<<endl;
    }
}

