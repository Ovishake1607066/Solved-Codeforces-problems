#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        ll a[n+10],b,c=0,d=0,e;
        loop
        {
            cin>>a[i];
        }
        for(ll i=0; i<n-1; i++)
        {
            if(i==0)
            {
                if(abs(a[i]-a[i+1])!=1 && abs(a[i]-a[n-1])!=1 && abs(a[i]-a[i+1])!=n-1 && abs(a[i]-a[n-1])!=n-1)
                {
                    c=1;
                    break;
                }
            }
            else
            {
                if(abs(a[i]-a[i+1])!=1 && abs(a[i]-a[i+1])!=n-1)
                {
                    c=1;
                    break;
                }
            }
        }
        if(abs(a[n-1]-a[n-2])!=1 && abs(a[0]-a[n-1])!=1 && n!=1 && abs(a[n-1]-a[n-2])!=n-1 && abs(a[0]-a[n-1])!=n-1)
        {
            c=1;
        }
        if(c)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

