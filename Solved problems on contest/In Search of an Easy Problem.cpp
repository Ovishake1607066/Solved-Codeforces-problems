#include<bits/stdc++.h>
#define ll long long
#define sf(n) scanf("%lld",&n)
#define pf(n) printf("%lld",n)
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,a,b;
    bool c=false;
    sf(n);
    loop
    {
        sf(a);
        if(c)
            continue;
        if(a==1)
            c=true;
    }
    if(c)
        printf("HARD\n");
    else
        printf("EASY");
}
