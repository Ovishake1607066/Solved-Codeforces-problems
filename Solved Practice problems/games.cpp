#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a1[n],a2[n],b,c,d,s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a1[i];
        cin>>a2[i];
    }
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
    {
        if(a1[i]==a2[j])
            s=s+1;
    }
    cout<<s<<endl;
}
