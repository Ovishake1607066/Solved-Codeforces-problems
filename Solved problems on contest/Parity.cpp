#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
int main()
{
    ll b,k;
    cin>>b>>k;
    ll c1=0,c2=0,d=0,e,f;
    if(b%2==0)
        d=0;
    else
        d=1;
    for(ll i=0;i<k-1;i++)
    {
        if(d)
        {
            cin>>e;
            if(e%2==0)
                c2++;
            else
                c1++;
        }
        else
        {
            cin>>e;
        }
    }
    cin>>e;
    if(e%2==0 || e==0)
        c2++;
    else
        c1++;
    //cout<<0%2<<endl;
    if(c1%2!=0)
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;

}

