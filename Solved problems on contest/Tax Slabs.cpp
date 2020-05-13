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
        ll n;
        cin>>n;
        ll a,b=0,c=0,d=0,s=0;
        if(n<=250000)
        {
            c=0;
        }
        else if(n<=500000)
        {
            c+=(n-250000)*.05;
        }
        else if(n<=750000)
        {
            c+=(250000)*.05;
            c+=(n-500000)*.1;
        }
        else if(n<=1000000)
        {
            c+=(250000)*.05;
            c+=(250000)*.1;
            c+=(n-750000)*.15;
        }
        else if(n<=1250000)
        {
            c+=(250000)*.05;
            c+=(250000)*.1;
            c+=(250000)*.15;
            c+=(n-1000000)*.2;
        }
        else if(n<=1500000)
        {
            c+=(250000)*.05;
            c+=(250000)*.1;
            c+=(250000)*.15;
            c+=(250000)*.2;
            c+=(n-1250000)*.25;
        }
        else
        {
            c+=(250000)*.05;
            c+=(250000)*.1;
            c+=(250000)*.15;
            c+=(250000)*.2;
            c+=(250000)*.25;
            c+=(n-1500000)*.3;
        }
        cout<<n-c<<endl;

    }
}

