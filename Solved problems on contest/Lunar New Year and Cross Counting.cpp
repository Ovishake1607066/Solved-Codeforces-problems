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
    ll n,a,b,c=0;
    cin>>n;
    char ch[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
            cin>>ch[i][j];
    }
    for(ll i=1;i<n-1;i++)
    {
        for(ll j=1;j<n-1;j++)
        {
            if(ch[i][j]=='X' && ch[i-1][j-1]=='X' && ch[i-1][j+1]=='X' && ch[i+1][j-1]=='X' && ch[i+1][j+1]=='X')
                c++;
        }
    }
    cout<<c<<endl;
}

