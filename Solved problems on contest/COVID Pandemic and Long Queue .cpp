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
        vector<ll>v;
        cin>>n;
        ll a,b=0,c=0;
        loop
        {
            cin>>a;
            if(a==1)
            {
                v.push_back(i+1);
            }
        }
        if(v.size()==1)
            cout<<"YES"<<endl;
        else
        {
            b=1110000000;
            for(ll i=0;i<v.size()-1;i++)
            {
                b=min(b,v[i+1]-v[i]);
            }
            if(b<=5)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
           // cout<<b<<endl;
        }
    }
}
