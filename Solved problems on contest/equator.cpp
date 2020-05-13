#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n],b,c=0,d,s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    if(s%2==0)
        b=s/2;
    else
        b=(s/2)+1;
    for(ll i=0;i<n;i++)
    {
        c=c+a[i];
        if(c>=b)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }

}
