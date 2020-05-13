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
    ll r,c,b,d=0;
    cin>>r>>c;
    ll a[r+10][c+10];
    if(r==1 && c==1)
    {
        cout<<0<<endl;
    }
    else if(c==1)
    {
        ll x=2;
        for(ll i=0;i<r;i++)
        {
            cout<<x<<endl;
            x++;
        }
    }
    else if(r==1)
    {
        ll x=2;
        for(ll i=0;i<c;i++)
        {
            cout<<x<<endl;
            x++;
        }
    }
    else
    {
        for(ll i=0;i<r;i++)
        {
            for(ll j=0,x=r+1;j<c;j++,x++)
            {
                a[i][j]=x*(i+1);
            }
        }
        for(ll i=0;i<r;i++)
        {
            for(ll j=0;j<c;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

