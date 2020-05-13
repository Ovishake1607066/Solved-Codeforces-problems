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
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,m,a,b=0,c=0,d=0,s=0;
        cin>>n>>m;
        a=n/m;
        b=a%10;
        d=a/10;
        if(d)
        {
            for(ll i=m,j=0; j<10; i+=m,j++)
            {
                ll x=i%10;
                s+=x;
                //cout<<s<<" "<<x<<endl;
            }
        }
        s=(s*(d));
        //cout<<s<<endl;
        for(ll i=m,j=0; j<b; i+=m,j++)
        {
            ll x=i%10;
            s+=x;//cout<<s<<endl;
        }
        cout<<s<<endl;
    }

}

