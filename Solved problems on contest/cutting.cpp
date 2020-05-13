#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,b;
    cin>>n>>b;
    ll a[n],o=0,e=0,s=0;
    ll v[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    if(a[0]%2==0)
        e++;
    else
        o++;
    ll j=0;
    for(ll i=1;i<n-2;i++)
    {
        if(a[i]%2==0)
            e++;
        else
            o++;
            //cout<<o<<e<<endl;
        if(o==e)
        {
            v[j++]=abs(a[i]-a[i+1]);
            //cout<<v[j-1]<<endl;
        }
    }
    sort(v,v+j);
    if(j==0)
    {
        cout<<0<<endl;
        return 0;
    }
    for(ll i=0;i<j;i++)
    {
        if(s+v[i]>b)
        {
            cout<<i<<endl;
            return 0;
        }
        else
            s=s+v[i];
    }
    cout<<j<<endl;
}
