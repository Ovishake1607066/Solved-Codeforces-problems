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
    ll n,x,y,a,b,c;
    cin>>n>>x>>y;
    a=abs(x-y);
    b=min(x,y)-1+a;
    c=n-max(x,y)+a;
    cout<<b<<endl<<c<<endl;
    if(b<=c)
        cout<<"White"<<endl;
    else
        cout<<"Black"<<endl;
}
