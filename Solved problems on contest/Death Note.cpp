#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,a,b,c=0,d=0;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        c=c+a;
        cout<<c/m<<" ";
        c=c%m;
    }
}

