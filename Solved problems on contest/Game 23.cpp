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
    ll n,m,a,b,c=0;
    cin>>n>>m;
    if(m%n!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    a=m/n;
    while(1)
    {
        if(a==1)
        {
            cout<<c<<endl;
            break;
        }
        if(a%3==0)
            a=a/3;
        else if(a%2==0)
            a=a/2;
        else
        {
            cout<<-1<<endl;
            break;
        }
        c++;
    }
}

