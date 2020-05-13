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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v1,v2,v3,v4;
        ll a,b,c=0,d=0;
        loop
        {
            cin>>a;
            v1.push_back(a);
        }
                loop
        {
            cin>>a;
            v2.push_back(a);
        }
        v3=v1;
        v4=v2;
        srt(v1);
        srt(v2);
        if(v1==v2)
        {
            for(ll i=0;i<n;i++)
            {
                if(i==n-1)
                    cout<<v3[i]<<endl;
                else
                    cout<<v3[i]<<" ";
            }
        }
        else if((v1[0]==v1[n-1] && v2[0]==v2[n-1]))
        {
            for(ll i=0;i<n;i++)
            {
                if(i==n-1)
                    cout<<v4[i]<<endl;
                else
                    cout<<v4[i]<<" ";
            }
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}

