#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,d;
    cin>>n>>d;
    ll a[n],b,c=2,e,f;
    for(ll i=0; i<n; i++)
    {
        if(i==0)
            cin>>a[i];
        else
        {
            cin>>a[i];
            if(a[i-1]+d==a[i]-d)
                c++;
            else
            {
                if(a[i-1]+d<a[i]-d)
                    c++;
                if(a[i]-d>a[i-1]+d)
                    c++;
            }
        }
    }
    cout<<c<<endl;
}
