#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100];
int main()
{
    ll n,m,b,c;
    cin>>n>>m;
    ll a1[n];
    for(ll i=0;i<n;i++)
    {
        cin>>b;
        a1[i]=b;
        a[b]++;
    }
    for(ll i=0;i<m;i++)
    {
        cin>>b;
        a[b]++;
    }
    for(ll i=0;i<n;i++)
    {
        c=a1[i];
        //cout<<c;
        //cout<<a[c]<<endl;
        if(a[c]>1)
            cout<<c<<" ";
    }
}
