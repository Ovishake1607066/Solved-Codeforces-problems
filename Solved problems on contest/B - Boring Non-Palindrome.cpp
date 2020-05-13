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
    string s;
    cin>>s;
    ll a,b,c=0,n=s.size();
    for(ll i=0;i<n;i++)
    {
        c=0;
        ll d=0;
        for(ll j=i;j<(((n-i)/2)+i);j++)
        {
            //cout<<s[j]<<"  "<<s[n-d-1]<<"    "<<j<<endl;
            if(s[j]!=s[n-d-1])
            {
                c=1;
                break;
            }
            d++;
        }
        if(c==0)
        {
            //cout<<i<<endl;
            for(ll j=i-1;j>=0;j--)
            {
                s+=s[j];
            }
            cout<<s<<endl;
            return 0;
        }

    }

}

