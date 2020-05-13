#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,x,f;
    cin>>n;
    ll a[n],b,c=0,d;
    loop
    cin>>a[i];
    cin>>x>>f;
    b=x+f;
    loop
    {
        if(a[i]<=x)
            continue;
        if(a[i]%b>x)
            c+=a[i]/b+1;
        else
            c+=a[i]/b;
    }
    cout<<c*f<<endl;

}
