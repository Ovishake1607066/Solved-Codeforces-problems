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
    ll n;
    cin>>n;
    char c[n+10][n+10];
    for(ll i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(ll j=0;j<n;j++)
            {
                if(j%2==0)
                    cout<<"W";
                else
                    cout<<"B";
            }
        }
        else
        {
            for(ll j=0;j<n;j++)
            {
                if(j%2==0)
                    cout<<"B";
                else
                    cout<<"W";
            }
        }
        cout<<endl;
    }

}

