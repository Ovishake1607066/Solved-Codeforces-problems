#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a1[n],a2[n+1],s=0,s2=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a1[i];
        if(i==0)
        {
            a2[i]=a1[i];
            s=s+a1[i];
        }
        else if(i==n-1)
        {
            a2[i]=a1[i]-a1[i-1];
            if(i%2==0)
                s=s+a1[i]-a1[i-1];
        }
        else
        {
            a2[i]=a1[i]-a1[i-1];
            if(i%2==0)
                s=s+a1[i]-a1[i-1];
        }
    }
    a2[n]=m-a1[n-1];
    for(ll i=0;i<n;i++)
    {
        if(a1[i]==1)
        {

        }
    }
}
