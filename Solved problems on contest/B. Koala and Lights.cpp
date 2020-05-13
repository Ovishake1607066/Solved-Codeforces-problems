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
bool sortbysec(const pair<pair<ll,ll>,ll> &a,
               const pair<pair<ll,ll>,ll> &b)
{
    return (a.second < b.second);
}
vector<vector<ll> >v;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<ll,ll> >v1,v2;
    ll a,b,c=0,d=0,x=0;
    loop
    {
        cin>>a>>b;
        v1.push_back(make_pair(a,b));
    }
    for(ll j=0; j<s.size(); j++)
    {
        //cout<<s[j]<<" ";
        if(s[j]=='1')
            x++;
    }
    // cout<<endl;
    c=max(c,x);
    for(ll i=0; i<100000; i++)
    {
        x=0;
        for(ll j=0; j<n; j++)
        {
            if(v1[j].second==i)
            {
                if(s[j]=='0')
                    s[j]='1';
                else
                    s[j]='0';
                v1[j].second+=v1[j].first;
            }
        }
        for(ll j=0; j<s.size(); j++)
        {
            //cout<<s[j]<<" ";
            if(s[j]=='1')
                x++;
        }
        // cout<<endl;
        c=max(c,x);
    }
    cout<<c<<endl;


}
