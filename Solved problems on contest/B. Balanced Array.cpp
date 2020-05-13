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
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,c=0,d=0;
        cin>>n;
        if(n%4==0)
        {
            cout<<"YES"<<endl;
            for(ll i=2;i<=n;i+=2)
            {
                cout<<i<<" ";
                c+=i;
            }
            for(ll i=1;i<n-1;i+=2)
            {
                cout<<i<<" ";
                d+=i;
            }
            cout<<c-d<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

