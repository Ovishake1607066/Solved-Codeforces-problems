#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n],x=0;
    double d,c,e=0,b=0,f=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        f=f+a[i];
    }
    for(ll i=0; i<n-k+1; i++)
    {
        b=0;
        x=0;
        for(ll j=i; j<n; j++)
        {
            b=b+a[j];
            x++;
            if(j>=i+k-1)
            {
                d=b/(double)x;
                if(d>e)
                    e=d;
            }
        }
        //cout<<d<<endl;
    }
    printf("%.14f\n",e);
}
