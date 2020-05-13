#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t;
    cin>>n>>t;
    ll a[n],b=0,c,d,s=0;
    for(ll i=1;i<n;i++)
    {
        cin>>a[i];
    }
    s=1+a[1];
    while(1)
    {
        if(s==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(s>t)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        s=s+a[s];
    }
}
