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
    string s;
    ll a,b,c;
    cin>>s;
    a=s.size();
    if(a%2==0)
        b=(a/2)-1;
    else
        b=a/2;
    cout<<s[b];
    for(ll i=1; ;i++)
    {
        if(b+i<a)
            cout<<s[b+i];
        else
            break;
        if(b-i>=0)
            cout<<s[b-i];
        else
            break;
    }

}

