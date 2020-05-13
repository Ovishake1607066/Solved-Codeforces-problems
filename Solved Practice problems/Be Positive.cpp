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
    ll n,a,b,c1=0,c2=0;
    cin>>n;
    a=ceil(n/2.0);
    loop
    {
        cin>>b;
        if(b>0)
            c1++;
        if(b<0)
            c2++;
        }
    if(c1>=a)
        cout<<1<<endl;
    else if(c2>=a)
        cout<<-1<<endl;
    else
        cout<<0<<endl;
}

