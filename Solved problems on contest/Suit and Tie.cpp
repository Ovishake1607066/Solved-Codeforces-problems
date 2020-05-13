#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,b,c=0,d,e;
    cin>>n;
    ll a[2*n];
    for(ll i=0;i<2*n;i++)
        cin>>a[i];
    d=2*n;
    for(ll i=0;i<d-2;i++)
    {
        for(ll j=d-1;j>i+1;j--)
        {
            if(a[i]==a[j])
            {
                //cout<<i<<j<<endl;
                c+=j-i-1;
                for(ll k=j;k>i+1;k--)
                {
                    cout<<a[k]<<a[k-1]<<endl;
                    swap(a[k],a[k-1]);
                    cout<<a[k]<<a[k-1]<<endl;
                }
            }
        }
    }
    cout<<c<<endl;
}
