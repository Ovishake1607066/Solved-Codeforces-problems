#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mark[5010];vector<ll>v;ll ans[1000000];
int main()
{
    v.push_back(0);
    for(ll i=0; i<=9; i++)
    {
        ll c=pow(3,i);
        ll k=v.size();
        for(ll j=0;j<k;j++)
        {
            v.push_back(c+v[j]);
        }

    }
    cout<<v.size()<<endl;
    ll g=1;
    for(ll i=1; i<=10000;)
    {
        if(v[g]>=i)
        {
            ans[i]=v[g];
            i++;
        }
        else
            g++;
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        cout<<ans[x]<<endl;
    }
}

