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
    ll n,a,b,c,d,e=1;
    cin>>n;
    if(n/10==0)
    {
        cout<<9<<endl;
        return 0;
    }
    n+=1;
    e++;
    while(1)
    {
        //cout<<n<<"    "<<e<<endl;
        if(n%10==0)
        {
            while(n%10==0)
            {
                n/=10;
            }
        }
        else
        {
            n++;
            e++;
        }
        if(n/10==0)
        {
            e+=8;
            break;
        }
        //cout<<n<<endl;
       // cout<<e;
    }
    cout<<e<<endl;
}

