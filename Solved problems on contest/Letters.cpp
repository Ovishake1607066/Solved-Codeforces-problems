#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,b,c=0,d,e,f=0;
    cin>>n>>m;
    ll a[n],a2[m];
    for(ll i=0;i<n;i++)
        {
            cin>>e;
            a[i]=e+c;
            c=c+e;
        }
    for(ll i=0;i<m;i++)
        cin>>a2[i];
    for(ll j=0;j<m;j++)
    {
        b=a2[j];
        for(ll i=f;i<n;i++)
        {
            if(b<=a[i])
            {
                if(i==0)
                    cout<<i+1<<" "<<b<<endl;
                else
                    cout<<i+1<<" "<<b-a[i-1]<<endl;
                f=i;
                break;
            }
        }
    }

}
