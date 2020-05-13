#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[110]={0},b,c=0,d;
    for(ll i=0;i<n;i++)
    {
        cin>>b;
        a[b]++;
    }
    for(ll i=0;i<110;i++)
    {
        //cout<<a[i]<<endl;
        if(a[i]>c)
            c=a[i];
    }
    cout<<c<<endl;
}
