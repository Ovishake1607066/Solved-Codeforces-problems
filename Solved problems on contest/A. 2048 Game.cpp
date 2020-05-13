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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,a,b,c=0,d;
        cin>>n;
        loop
        {
            cin>>a;
            if(a<=2048)
                mark[a]++;
        }
        for(ll i=0;i<=10;i++)
        {
            b=pow(2,i);
            c=mark[b];
            d=c/2;
            mark[b*2]+=d;
        }
        if(mark[2048])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        for(ll i=0;i<2500;i++)
            mark[i]=0;
    }

}
