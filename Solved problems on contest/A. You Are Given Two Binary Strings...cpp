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
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        ll a,b,c=0,d=0,e=0;
        cin>>s1>>s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        for(ll i=0;i<s2.size();i++)
        {
            if(s2[i]=='1')
            {
                a=i;
                break;
            }
        }
        for(ll i=a;i<s1.size();i++)
        {
            if(s1[i]=='1')
            {
                b=i-a;
                break;
            }
        }
        cout<<b<<endl;
    }
}

