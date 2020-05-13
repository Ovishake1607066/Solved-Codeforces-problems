#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll chk[1000000];
int main()
{
    ll n,a,b,c=0,d=0;
    scanf("%lld",&n);
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        chk[a]=1;
    }
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(!chk[a])
        {
            printf("0 ");
            continue;
        }
        if(d>=v.size())
        {
             printf("%lld ",c);
             continue;
        }
        c=1;
        for(ll j=d;j<v.size();j++)
        {
            d=j+1;
            if(v[j]==a)
            {
                printf("%lld ",c);
                chk[v[j]]=0;
                break;
            }
            else
            {
                chk[v[j]]=0;
                c++;
            }
        }
    }
}
