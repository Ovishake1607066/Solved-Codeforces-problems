#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,b,c,t,p,q,r,s1=0,s2=0,s3=0,t1=0,t2=0,t3=0;
    cin>>n>>a>>b>>c>>t;
    ll ar[n+1];
    for(ll i=1;i<=n;i++)
            {
                cin>>ar[i];
            }
    s1=a*n;
        for(ll i=1;i<=n;i++)
        {
                t1=t1+((t-ar[i])*c);
                t2=t2+(a-((t-ar[i])*b));
        }
        s2=t1+t2;
        cout<<max(s1,s2)<<endl;
}
