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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,a,c=0;
        cin>>n>>k;
        for(ll i=0;i<n;)
        {
            for(ll j=0,l=97;j<k;j++,l++)
            {
                if(i>=n)
                {
                    c=1;
                    break;
                }
                cout<<(char)l;
                i++;
            }
            if(i>=n)
                break;
            if(c==1)
                break;
        }
        cout<<endl;
    }
}
