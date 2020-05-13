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
    ll a,b=0,c=0,d=0,e=0;
    string s;
    cin>>s;
    vector<ll>v1,v2;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='(')
            ;
        else
            c++;
    }
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='(')
            b++;
        else
            c--;
        if(b==c)
        {
            if(b>e)
            {
                e=b;
                d=i;
            }
        }
    }
    if(e==0)
    {
        cout<<0<<endl;
    }
    else
    {
        for(ll i=0;i<=d;i++)
            {
                if(s[i]=='(')
                    v1.push_back(i+1);
            }
        for(ll i=d+1;i<s.size();i++)
        {
            if(s[i]==')')
                v2.push_back(i+1);
        }
        cout<<1<<endl;
        cout<<e+e<<endl;
        for(ll i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
        for(ll i=0;i<v2.size();i++)
            cout<<v2[i]<<" ";
    }
}

