#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[4];
int main()
{
    ll n,b,c=0,d,e,f,g;
    for(ll i=0;i<4;i++)
        cin>>a[i];
    sort(a,a+4);
    b=a[0];
    for(ll i=1;i<4;i++)
    {
        //cout<<a[i]<<endl;
        if(a[i]==b)
            c++;
        else
        {
            b=a[i];
        }
    }
    cout<<c<<endl;
}
