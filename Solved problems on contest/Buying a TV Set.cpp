#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    cout<<log10(2)<<endl;
    ll a,b,x,y,c;
    cin>>a>>b>>x>>y;
    c=__gcd(x,y);
    //cout<<c<<endl;
    x/=c;
    y/=c;
    cout<<min(a/x,b/y)<<endl;
}
