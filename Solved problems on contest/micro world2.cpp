#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,b=0,c=0,d=0,e;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=n-1;i>0;i--)
    {
        if(d==0 && a[i]==a[i-1])
        {
            continue;
        }
        else
            d=1;
        if(a[i]<=a[i-1]+k)
        {
           // cout<<a[i]<<endl;
           b=1;
            for(ll j=i-2;j>=0;j--)
            {
                if(a[j]==a[i-1])
                    b++;
                else
                    break;
            }
            i=i-b+1;
            c=c+b;
        }
        //cout<<b<<endl;
    }
    if(d==0)
        cout<<n<<endl;
    else
        cout<<n-c<<endl;
}
