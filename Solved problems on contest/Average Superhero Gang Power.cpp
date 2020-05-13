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
    double k,m;
    ll n,f,g;
    double b,c=0.0,d,s=0.0,s2=0.0,s3=0.0,s4=0.0;
    cin>>n>>k>>m;
    double a[n];
    loop
    {
        cin>>a[i];
        s2+=a[i];
    }
    sort(a,a+n);
    b=m-n;
    f=min(k,m);
    s3=max((double)((s2+min((n-1)*k,m))/(n)),s3);
    for(ll i=0;i<min(f,n-1);i++)
    {
        double xx=min((double)n-i-1,m-i-1);
        s3=max((double)((s2-=a[i])+min(k*xx,m-i-1))/(n-i-1),(double)s3);
        //s4=max((double)((s2+min((m-i-1)*k,m-i-1))/(n-i-1)),s4);
        //cout<<s2<<endl;
        //cout<<s3<<endl;
    }
    //s3=max(s3,s4);
    if(b>=-1)
    {
        d=min(b+1,k);
        d=(d/1.0);
        printf("%.15lf",max(s3,(double)((a[n-1]+d)/1.0)));
    }
    else
    {
        for(ll i=m; i<n; i++)
        {
            s=s+a[i];
        }
        printf("%.15lf",max(s3,(double)(s/(n-m))));
    }
}
