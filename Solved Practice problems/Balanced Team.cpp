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
ll mark[5010];
int main()
{
    ll n;
    sf(n);
    ll a[n+10],b,c,d,e,s=0;
    loop
    {
        sf(a[i]);
    }
    sort(a,a+n);
    ll j=0;
    //cout<<a[n-1]<<endl;
    //cout<<a[0]<<endl;
    for(ll i=0; i<n; i++)
    {
        b=a[i];
        for( ; j<n; j++)
        {
            //cout<<a[j]<<" "<<b<<endl;
            if((a[j]-b)>5)
            {
                s=max(j-i,s);
                break;
            }
        }
        s=max(j-i,s);
        if(s>n-i)
            break;
        //cout<<s<<endl;
    }
    cout<<s<<endl;
}
