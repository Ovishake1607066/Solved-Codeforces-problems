#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,k,a,b,c,d;
    cin>>n>>k;
    if(k/n>1)
    {
        cout<<0<<endl;
        return 0;
    }
    k=k-1;
    if(k<=n)
    {
        cout<<k/2<<endl;
    }
    else
    {
        cout<<(2*n-k)/2<<endl;
        return 0;
    }

}
