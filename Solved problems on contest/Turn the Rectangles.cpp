#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a1[n],a2[n],b,c,d=0,e=0,f;
    for(ll i=0;i<n;i++)
    {
        cin>>a1[i]>>a2[i];
    }
    b=max(a2[0],a1[0]);
    if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(ll i=1;i<n;i++)
    {
        if(a2[i]<=b)
        {
            f=a2[i];
            d=1;
        }
        if(a1[i]<=b)
        {
            c=a1[i];
            e=1;
        }
        if(!d)
            f=0;
        if(!e)
            c=0;
        b=max(f,c);
        if(!d && !e)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        d=0;
        e=0;
    }
    cout<<"YES"<<endl;
}
