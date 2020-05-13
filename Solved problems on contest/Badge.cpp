#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=1;i<=n;i++)
#define loop2 for(ll j=i; ;j++)
using namespace std;
ll a[10000];
int main()
{
    ll n,p,b,c,d;
    cin>>n;
    loop
    {
        cin>>p;
        a[i]=p;
    }
    vector<ll>v;
    loop
    {
        b=i;
        v.push_back(i);
        loop2
        {
            ll x=0;
            for(ll k=0;k<v.size();k++)
            {
                //cout<<k<<"            "<<v[k]<<endl;
                if(v[k]==a[b])
                {
                    cout<<a[b]<<endl;
                    x=1;
                    break;
                }
            }
            if(x==1)
                break;
            b=a[b];
            v.push_back(b);
            //cout<<b<<endl;
        }
        v.clear();
        //cout<<v.size()<<endl;
    }
}
