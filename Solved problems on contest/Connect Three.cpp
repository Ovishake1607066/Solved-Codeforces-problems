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
    vector<pair<ll,ll> >v;
    ll xa,xb,xc,ya,yb,yc,aa,bc,ac,m,c=0,d1=100000,d2=100000,d3=100000,d4=100000,p1,p2;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    ab=abs(xa-xb)+abs(ya-yb);
    ac=abs(xa-xc)+abs(ya-yc);
    bc=abs(xb-xc)+abs(yb-yc);
    p1=xa;
    p2=xb;
    if(ab<=ac)
    {
        if(p1+1<=1000)
            d1=(p1+1)+p2;
        if(p2+1<=1000)
            d2=(p2+1)+p1;
        if(p1-1>=0)
            d3=(p1-1)+p2

    }
}
