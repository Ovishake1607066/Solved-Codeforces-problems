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
    ll n,m,ta,tb,k;
    cin>>n>>m>>ta>>tb>>k;
    ll a[n+10],a2[m+10];
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        a[i]+=ta;
    }
    for(ll i=1; i<=m; i++)
    {
        cin>>a2[i];
    }
    if(k>=n || k>=m)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll i=1,j=1,c=0;
    while(1)
    {
        if(i>n || j>m)
        {
            cout<<-1<<endl;
            return 0;
        }
        if(c==k)
        {
            if(a2[j]>=a[i])
            {
                cout<<a2[j]+tb<<endl;
                return 0;
            }
            else
            {
                j++;
                continue;
            }
        }
        if(a[i]>a2[j])
        {
            j++;
            continue;
        }
        if(i+1>n)
        {
            cout<<-1<<endl;
            return 0;
        }
        if(a[i+1]>a2[j])
        {
            i++;
            c++;
        }
        else
        {
            j++;
            c++;
        }
    }
}

