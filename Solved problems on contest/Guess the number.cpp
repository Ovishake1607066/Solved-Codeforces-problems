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
    ll  t;
    cin>>t;
    while(t--)
    {
        ll a,m;
        cin>>a>>m;
        ll b,c=0,d=0,e=0;
        b=m%a;
        vector<ll>v;
        for(ll i=b; ; i+=a)
        {
            c=(m-i)/a;
            if(i>c)
                break;
            if(i==0)
                ;
            else if(c%i==0)
            {
                v.push_back(c);
            }
            //cout<<i<<"  "<<c<<endl;
        }
        sort(v.begin(),v.end());
        cout<<v.size()<<endl;
        for(ll i=0; i<v.size(); i++)
        {
            if(i==v.size()-1)
                cout<<v[i];
            else
                cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

