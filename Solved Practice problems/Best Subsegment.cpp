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
    ll n,s=0,b=0,c=0,m=0;
    cin>>n;
    ll a[n];
    loop
    {
        cin>>a[i];
        s=max(a[i],s);
    }
    loop
    {
        if(a[i]==s)
        {
                c++;
                m=max(m,c);

        }
        else
        {
            c=0;
        }
    }
    cout<<m<<endl;

}

