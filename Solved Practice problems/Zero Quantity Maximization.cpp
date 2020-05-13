#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    long double a1[n],a2[n],c=0.0,d=0.0,e=0.0;
    long double b;
    loop
    {
        cin>>a1[i];
    }
    loop
    {
        cin>>a2[i];
    }
    vector<long double>v;
    for(ll i=0; i<n; i++)
    {
        if(a1[i]==0.0 && a2[i]==0.0)
        {
            e++;
            d++;
            continue;
        }
        if(a1[i]==0.0 && a2[i]!=0.0)
            continue;
        if(a1[i]!=0.0 && a2[i]==0.0)
        {
            d++;
            continue;
        }
        long double xx=(long double)((long double)a1[i])/((long double)a2[i]);
        v.push_back(xx);
        //cout<<xx<<endl;
    }
    sort(v.begin(),v.end());
    for(ll i=0; i<v.size(); i++)
    {
        b=v[i];
        vector<long double>::iterator lower,upper;
        upper = upper_bound (v.begin(), v.end(), b);
        long double x=(upper- v.begin());
        //cout<<x<<"   "<<i<<endl;
        c=max(c,x-i);
        //cout<<v[i]<<endl;
    }
    c=c+e;
    c=max(c,d);
    cout<<(ll)c<<endl;
}

