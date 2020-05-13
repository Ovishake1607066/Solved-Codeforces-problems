#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
int main()
{
    ll n,a,b,c;
    cin>>n;
    vector<ll>v;
    loop
    {
        cin>>a;
        v.push_back(a);
    }
    if(n==2)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    a=abs(v[n-1]-v[1]);
    b=abs(v[0]-v[n-2]);
    cout<<min(a,b)<<endl;
}
