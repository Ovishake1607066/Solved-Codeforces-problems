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
    ll n,k,b=0,c=0,d=0,s=-1,e=0,f=0;
    cin>>n>>k;
    ll a[1000];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            e++;
        else
            f++;
    }
    //cout<<e<<endl<<f<<endl;
    for(ll i=1; i<=k; i++)
    {
        b=0;
        c=0;
        for(ll j=i; j<=n; j+=k)
        {
            if(a[j]==1)
                b++;
            else
                c++;
        }
        //cout<<b<<endl<<c<<endl;
        b=e-b;
        c=f-c;
        d=abs(b-c);
        if(s<d)
            s=d;
        //cout<<b<<endl<<c<<endl;
    }
    cout<<s<<endl;
}

