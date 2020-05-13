#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll ar[n-1],s=0,c,d,e,f;
    cin>>d;
    s=s+d;
    for(ll i=0;i<n-1;i++)
    {
        cin>>ar[i];
        s=s+ar[i];
    }
    if(((d*a)/s)>=b)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(ar,ar+n-1);
    for(ll i=n-2,j=1;i>=0;i--,j++)
    {
        s=s-ar[i];
        if(((d*a)/s)>=b)
        {
            cout<<j<<endl;
            return 0;
        }
    }
}

