#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l 1000000
long long a[10000000],prime[1000000];
int main()
{
    ll e;
    for(ll i=3; i*i<=l; i+=2)
        if(a[i]==0)
            for(ll j=i*i; j<=l; j=j+(i*2))
                a[j]=1;
    prime[0]=2;
    for(ll i=3,j=1; i<=l; i+=2)
        if(a[i]==0)
        {
            prime[j++]=i;
            e=j;
        }
    ll n,d,b,c=0;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        return 0;
    }
    //cout<<prime[e-1]<<endl;
    for(ll i=0;i<e; i++)
    {
        if(n%prime[i]==0)
        {
            n=n-prime[i];
            c++;
            break;
        }
    }
    if(!c)
        n=0;
    cout<<1+(n/2)<<endl;
}

