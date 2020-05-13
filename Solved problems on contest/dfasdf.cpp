#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d ",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();


int main()
{
    fio;
    ll n;
    cin>>n;
    for(ll z=0;z<n;z++)
    {

            ll t;
            sf(t);
            if(z==n-1)
            {

            }
            if(t==1)
            {
                cout<<0<<endl;
            }
            else if(t==2)
            {
                cout<<0<<endl;
            }
            else if(t==3)
            {
                cout<<2<<endl;
            }
            else if(t==4)
            {
                cout<<3<<endl;
            }
            else
            {
                t-=4;
                ll ans=(t/3)*2+3;
                if(t%3==2)
                    ans++;
                cout<<ans<<endl;
            }
        }


}

