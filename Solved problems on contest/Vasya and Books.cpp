#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll chk[1000000];
int main()
{
    ll n,a,b,c,d=0;
    vector<ll>v;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        c=1;
        if(d==v.size())
        {
                cout<<0<<" ";
                continue;
        }
        for(ll j=d;j<v.size();j++)
        {
            //cout<<s.front()<<endl;
            if(chk[a])
            {
                cout<<0<<" ";
                break;
            }
            d=j+1;
            if(v[j]==a)
            {
                cout<<c<<" ";
                chk[v[j]]=1;
                break;
            }
            else
            {
                c++;
                chk[v[j]]=1;
            }
        }
    }
}
