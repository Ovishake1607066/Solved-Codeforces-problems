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
ll mark[100000];
int main()
{
    ll c1,c2,c3,c4;
    cin>>c1>>c2>>c3>>c4;
    if(c1!=c4||(c3>0 && c1==0))
        cout<<0<<endl;
    else
        cout<<1<<endl;
}

