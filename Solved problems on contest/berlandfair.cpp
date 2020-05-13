#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,t,b,c=0,s=0,m,d;
    cin>>n>>t;
    ll a[n],a2[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        a2[i]=a[i];
    }
    sort(a2,a2+n);
    m=a2[0];
    ll t1=t;
    while(1)
    {
        ll s1=0,c2=0;
        for(ll i=0; i<n; i++)
        {
            if(s+a[i]<=t)
            {
                s=s+a[i];
                s1=s1+a[i];
                c2++;
                c++;
            }
            if(t-s<m)
            {
                cout<<c<<endl;
                return 0;
            }
        }
        d=(t1/s1)-1;
        s=s+s1*d;
        c=c+c2*d;
        t1=t-s;
    }
}

