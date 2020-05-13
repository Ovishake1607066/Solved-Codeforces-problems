#include<bits/stdc++.h>
#define ll long long
#define sf(n) scanf("%lld",&n)
#define pf(n) printf("%lld",n)
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
ll a[110][110];
using namespace std;
int main()
{
    ll n,d,m,x,y,c,e=0;
    cin>>n>>d>>m;
    c=n-d+n;
    while(m--)
    {
        e=0;
        cin>>x>>y;
        if(x+y<=c)
            e=1;
        else
            e=0;
        if(x+y>=d && e)
            e=1;
        else
            e=0;
        if(abs(x-y)<=d && e)
            e=1;
        else
            e=0;
        if(e==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
