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
    ll a[n+10];
    loop
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<ll>());
    if(n%2==0)
    {
        for(ll i=0; i<n/2; i++)
        {
            cout<<a[i]<<" "<<a[i+n/2]<<" ";;
        }
    }
    else
    {
        ll x=n/2+1;
        for(ll i=0; i<x; i++)
        {
            if(i!=n/2)
                cout<<a[i]<<" "<<a[i+x]<<" ";
            else
                cout<<a[i];
        }
    }

}

