#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,c1=0,c2=0;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n/2;i++)
        {
            cin>>m;
            v.push_back(m);
        }
    sort(v.begin(),v.end());
    for(ll i=0,j=1,k=2;i<n/2;i++,j+=2,k+=2)
    {
        c1=c1+abs(j-v[i]);
        c2=c2+abs(k-v[i]);
    }
    cout<<min(c1,c2)<<endl;
}
