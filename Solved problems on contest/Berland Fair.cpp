#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,t,b,c=0,s=0,m;
    ll a[n],a2[n];
    cin>>n>>t;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        a2[i]=a[i];
        if(s+a[i]<=t)
        {
            s=s+a[i];
            c++;
        }
    }
    sort(a2,a2+n);
    m=a2[0];
    if(t-s>m)
    {
        cout<<c<<endl;
    }
    else
    {
        ll d=t/s;
        s=s*d;
        c=c*d;
        if(t-s>m)
        {
            cout<<c<<endl;
        }
        for(ll i=0; i<n; i++)
        {
            if(t-s>m)
            {
                cout<<c<<endl;
                break;
            }
            if(s+a[i]<t)
            {
                s=s+a[i];
                c++;
            }
        }
    }
}
