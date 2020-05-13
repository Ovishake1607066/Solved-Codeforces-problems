#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l 1000000
int main()
{
    ll n,b=0;
    cin>>n;
    ll a1[n+10],a[n+10];
    for(ll i=0;i<n;i++)
    {
        cin>>a1[i];
        a[i]=a1[i];
    }
    sort(a,a+n);
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        ll x=0;
        if(a1[i]==0)
            continue;
        for(ll j=0;j<n;j++)
        {
            if(a1[j]%a[i]==0 && a1[j]!=-1)
            {
                x++;
                //cout<<a[i]<<"  "<<a1[j]<<endl;

                a1[j]=-1;
            }
        }
        if(x)
            c++;
    }
    cout<<c<<endl;
}

