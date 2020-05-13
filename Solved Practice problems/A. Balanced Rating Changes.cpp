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
    ll a[n],b,c=0,d=0,e=0,f=0,g=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2!=0 && a[i]<0)
            c++;
        if(a[i]%2!=0 && a[i]>0)
            d++;
    }
    for(ll i=0; i<n; i++)
    {
        if(a[i]%2!=0 && a[i]<0)
        {
            if(!e)
            {
                a[i]=a[i]/2;
                e=1;
            }
            else
            {
                a[i]=(a[i]/2)-1;
                e=0;
            }
        }
        else if(a[i]%2!=0 && a[i]>0)
        {
            if(!f)
            {
                a[i]=(a[i]/2);
                f=1;
            }
            else
            {
                a[i]=(a[i]/2)+1;
                f=0;
            }
        }
        else
            a[i]=a[i]/2;
    }
    for(ll i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }

}

