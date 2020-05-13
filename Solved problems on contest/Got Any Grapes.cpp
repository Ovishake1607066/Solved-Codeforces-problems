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
    ll x,y,z,a,b,c,s1=0,s2=0,e,f,g=0;
    cin>>x>>y>>z>>a>>b>>c;
    s1=x+y+z;
    s2=a+b+c;
    if(s2<s1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(a<x)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        b=b+(a-x);
        if(b<y)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
            c=c+(b-y);
            if(c<z)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }

}

