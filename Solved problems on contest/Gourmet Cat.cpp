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
    ll a,b,c,e,d=0,m=10000000000,s1,s2,s3,s=0,f1,f2,f3;
    cin>>a>>b>>c;
    s1=a/3;
    s2=b/2;
    s3=c/2;
    m=min(s1,m);
    m=min(s2,m);
    m=min(s3,m);
    s+=(m*7);
    a=a-(m*3);
    b-=(m*2);
    c-=(m*2);
    f1=a;
    f2=b;
    f3=c;
    //cout<<f1<<f2<<f3<<endl;
    ll abc[7]={2,1,1,2,3,1,3};
    for(ll i=0;i<7;i++)
    {
        ll z=0;
        a=f1;
        b=f2;
        c=f3;
        //cout<<abc[i]<<endl;
        for(ll j=i;j<i+7;j++)
        {
            if(abc[j%7]==1 && a>=1)
            {
                a--;
                z++;
            }
            else if(abc[j%7]==2 && b>=1)
            {
                b--;
                z++;
            }
            else if(abc[j%7]==3 && c>=1)
            {
                c--;
                z++;
            }
            else
                break;
                //cout<<z<<"    "<<i<<endl;
        }
        d=max(d,z);
    }
    cout<<s+d<<endl;
}

