#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    char s[n];
    for(ll i=0;i<n;i++)
    {
        if(i%2==0)
            s[i]='0';
        else
            s[i]='1';
    }
    ll l,r,a,b,c,d,j=0,e;
    for(ll i=0; i<m; i++)
    {
        cin>>l>>r;
    }
    for(ll i=0;i<n;i++)
        cout<<s[i];
}
