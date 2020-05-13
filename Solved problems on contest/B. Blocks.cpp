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
    string s,s1,s2;
    cin>>s1;
    vector<ll>v,v1,v2;
    ll a,b=0,c=0,d=0;
    s=s1;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            if(i+1>=n)
            {
                c=1;
                break;
            }
            v.push_back(i+1);
            if(s[i+1]=='W')
                s[i+1]='B';
            else
                s[i+1]='W';
        }
    }
    if(c==0 && v.size()<=3*n)
    {
        cout<<v.size()<<endl;
        for(ll i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        return 0;
    }
    c=0;
    v.clear();
    s=s1;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='W')
        {
            if(i+1>=n)
            {
                c=1;
                break;
            }
            v.push_back(i+1);
            if(s[i+1]=='W')
                s[i+1]='B';
            else
                s[i+1]='W';
        }
    }
    if(c==0 && v.size()<=3*n)
    {
        cout<<v.size()<<endl;
        for(ll i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        return 0;
    }
    cout<<-1<<endl;
}

