#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n],c=0,d,s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(ll i=n-1;i>0;i--)
    {
            s=s+a[i];
    }
    if(n<2)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(s==a[0])
        cout<<-1<<endl;
    else
    {
        cout<<n-1<<endl;
        for(ll i=0;i<n;i++)
            {
                if(b[i]==a[0] && c==0)
                    c=1;
                else
                    cout<<i+1<<" ";
            }
    }
}
