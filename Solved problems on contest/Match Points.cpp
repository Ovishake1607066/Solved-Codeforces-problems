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
    ll n,z;
    cin>>n>>z;
    ll a[n],b,c=0,d,e;
    loop
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll i=0,j=1;
    while(1)
    {
        //cout<<i<<"    "<<j<<endl;
        if(i>=n || j>=n)
            break;
        if(i==j)
        {
            j++;
            continue;
        }
        if(a[i]==0)
        {
            i++;
        }
        if(a[j]==0)
        {
            j++;
        }
        if(i==j)
        {
            j++;
            continue;
        }
        if(a[i] && a[j])
        {
            if(abs(a[i]-a[j])>=z)
            {
                c++;
                a[i]=0;
                a[j]=0;
                i++;
                j++;
            }
            else
                j++;
        }
    }
    cout<<c<<endl;
}

