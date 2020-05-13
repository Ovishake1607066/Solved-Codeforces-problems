#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
#define l 1000000
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,a,b=0,c=0,d=0,f=0;
        cin>>n>>k;
        for(ll i=1; ;i++)
        {
            a=((i*i)+i)/2;
            if(a>=k)
            {
                ll x=i-1;
                b=((x*x)+x)/2;
                f=i;
                break;
            }
        }
        //cout<<b<<f<<endl;
        b+=1;
        d=k-b;
        ll e=n-d;
        f=n-f;
        if(k==1)
        {
            e=n;
            f=n-1;
        }
        for(ll i=1;i<=n;i++)
        {
            if(i==f || i==e)
                cout<<"b";
            else
                cout<<"a";
        }
        //cout<<f<<"  "<<e<<endl;
        cout<<endl;
    }
}

