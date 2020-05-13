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
    ll y,b,r,a,c;
    cin>>y>>b>>r;
    a=r;
    while(1)
    {
        if(a-1<=b && a-2<=y)
        {
            cout<<a+a-1+a-2<<endl;
            return 0;
        }
        a--;
    }

}

