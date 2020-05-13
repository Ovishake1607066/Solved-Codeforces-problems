#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b=0,c,d;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n-1;i++)
    {
        sort(a,a+n);
        if(b==0)
        {
            a[n-1]=0;
            b=1;
        }
        else
        {
            for(ll i=0;i<n;i++)
            {
                if(a[i]!=0)
                {
                    a[i]=0;
                    b=0;
                    break;
                }
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            cout<<a[i]<<endl;
            return 0;
        }
    }
}
