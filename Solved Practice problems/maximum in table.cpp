#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,b,c,d,e,f;
    cin>>n;
    ll a[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i==0 || j==0)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n-1][n-1]<<endl;
}
