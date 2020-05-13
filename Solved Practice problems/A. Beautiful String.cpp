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
        ll a,b,c=0,d=0;
        cin>>s;
        ll n=s.size();
        for(ll i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1] && s[i]!='?')
            {
                c=1;
                break;
            }
        }
        if(c)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            for(ll i=0; i<n; i++)
            {
                if(s[i]=='?')
                {
                    if(i==0)
                    {
                        if(i+1<n)
                        {
                            if(s[i+1]=='a' || s[i+1]=='c')
                                s[i]='b';
                            else
                                s[i]='a';
                        }
                        else
                            s[i]='a';
                    }
                    else if(i==n-1)
                    {
                        if(s[i-1]=='a' || s[i-1]=='b')
                            s[i]='c';
                        else
                            s[i]='a';
                    }
                    else
                    {
                        if((s[i-1]=='a' && s[i+1]=='b') || (s[i-1]=='b' && s[i+1]=='a'))
                            s[i]='c';
                        else if((s[i-1]=='a' && s[i+1]=='c') || (s[i-1]=='c' && s[i+1]=='a'))
                            s[i]='b';
                        else if((s[i-1]=='b' && s[i+1]=='c') || (s[i-1]=='c' && s[i+1]=='b'))
                            s[i]='a';
                        else if(s[i-1]=='a' || s[i-1]=='c')
                            s[i]='b';
                        else
                            s[i]='a';
                    }
                }
            }
        }
        for(ll i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1] && s[i]!='?')
            {
                c=1;
                break;
            }
        }
        if(c)
        {
            cout<<-1<<endl;
        }
        else
            cout<<s<<endl;
    }
}

