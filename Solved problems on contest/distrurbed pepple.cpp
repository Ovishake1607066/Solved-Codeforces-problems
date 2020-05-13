#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,c=0;
    cin>>n;
    ll a[n];
    vector<ll>v;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=1;i<n-1;i++)
    {
        if(a[i]==0 && a[i+1]==1 && a[i-1]==1)
        {
            a[i+1]=0;
            c++;
        }
    }
    cout<<c<<endl;
}

