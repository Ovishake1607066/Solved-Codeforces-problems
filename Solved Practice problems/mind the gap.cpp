#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,s;
    cin>>n>>s;
    ll a[n],h,m,b,c=0,d,e,f;
    for(ll i=0;i<n;i++)
    {
        cin>>h>>m;
        b=(60*h)+m;
        a[i]=b;
        //cout<<a[i]<<endl;
    }
    if(a[0]>=s+1)
           {
               cout<<0<<" "<<0<<endl;
               return 0;
           }
    b=a[0];
    for(ll i=1;i<n;i++)
    {
        if((a[i]-b)>=(2*s)+2)
        {
            cout<<(a[i-1]+1+s)/60<<" "<<(a[i-1]+1+s)%60<<endl;
            //cout<<a[i-1]<<endl;
            //cout<<a[i]<<b<<endl;
            return 0;
        }
        b=a[i];
    }
    cout<<(a[n-1]+1+s)/60<<" "<<(a[n-1]+1+s)%60<<endl;
}
