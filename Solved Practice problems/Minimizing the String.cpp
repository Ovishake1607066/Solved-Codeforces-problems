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
    ll n,a,b,c;
    sf(n);
    string s;
    cin>>s;
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            s.erase(s.begin()+i);
            cout<<s<<endl;
            return 0;
        }
    }
    s.erase(s.end()-1);
    cout<<s<<endl;
}

