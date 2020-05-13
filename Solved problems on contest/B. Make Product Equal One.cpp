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
    ll a[n+10],b1=0,b2=0,b3=0,c=0,d=0,e=0;
    loop
    {
        cin>>a[i];
        if(a[i]<0)
        {
            b1++;
            c+=(abs(a[i]+1));
        }
        else if(a[i]>0)
        {
            b2++;
            c+=abs(a[i]-1);
        }
        else
        {
            b3++;
            c++;
        }
    }
    if(b1%2!=0)
    {
        if(b1==n)
            c+=2;
        else if(b3==0)
            c+=2;
    }
    cout<<c<<endl;
}

