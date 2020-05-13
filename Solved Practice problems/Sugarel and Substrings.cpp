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
ll mark[100000];
int main()
{
    ll n,a,b,c=0;
    string s;
    cin>>n>>s;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i;j<n;j++)
            {
                if(mark[(ll)s[j]])
                    break;
                else
                {
                    c++;
                    mark[(ll)s[j]]=1;
                }
            }
            for(ll k=97;k<=122;k++)
                mark[k]=0;
                //cout<<c<<endl;
    }
    cout<<c<<endl;
}

