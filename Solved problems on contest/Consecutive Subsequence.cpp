#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,b,c=0,d,e;
    cin>>n;
    ll a[n],a2[n],a3[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        ll k=0;
        b=a[i];
        a2[k++]=i+1;
        for(ll j=i+1;j<n;j++)
        {
            if(a[j]==b+1)
            {
                a2[k++]=j+1;
                //cout<<k<<endl;
                b++;
            }
        }
        if(k>c)
        {
            c=k;
            for(ll m=0;m<c;m++)
                a3[m]=a2[m];
        }
    }
    cout<<c<<endl;
    for(ll i=0;i<c;i++)
        cout<<a3[i]<<" ";
}
