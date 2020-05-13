#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],b,c,d,s=0,e,f;
    loop
    {
        cin>>a[i];
    }
    sort(a,a+n);
    b=a[0];
    c=a[n-1];
    loop
    {
        s=s+(c-a[i]);
    }
    f=m;
    m=m-s;
    if(m>0)
    {
        if(m%n==0)
            e=m/n+c;
        else
            e=m/n+1+c;
    }
    else
        e=c;
    cout<<e<<" "<<c+f<<endl;
}
