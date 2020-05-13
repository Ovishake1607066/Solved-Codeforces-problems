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
    ll n;
    cin>>n;
    vector<ll>v1;
    vector<ll>v2;
    ll a,b,c,d,e,f;
    loop
    {
        cin>>a;
        if(a%2==0)
            v2.push_back(a);
        else
            v1.push_back(a);
    }
    if(abs(v1.size()-v2.size()<=1))
    {
        cout<<0<<endl;
        return 0;
    }
    srt(v1);
    srt(v2);
    ll s=0;
    if(v1.size()>v2.size())
    {
        a=v1.size()-v2.size();
        for(ll i=0;i<a-1;i++)
            s+=v1[i];
    }
    else
    {
        a=v2.size()-v1.size();
        for(ll i=0;i<a-1;i++)
            s+=v2[i];
    }
    cout<<s<<endl;
}

