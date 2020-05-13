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
    ll n;
    cin>>n;
    set<ll>s;
    ll a[n],b,c,d,e,f,g;
    b=sqrt(n);
    for(ll i=b;i>=1;i--)
    {
        if(n%i==0)
        {
            f=((i*i)+i)/2;
            c=(f*(n/i))-(i*((n/i)-1));
            s.insert(c);
            d=n/i;
            g=((d*d)+d)/2;
            e=(g*(n/d))-(d*((n/d)-1));
            s.insert(e);
            //cout<<f<<endl<<g<<endl;
        }
    }
    set<ll> :: iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
}
