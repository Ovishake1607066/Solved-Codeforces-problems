#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n1;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,d,a,b,c=0,x;
    cin>>n>>d;
    vector<ll>v1;
    vector<ll>v2;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v2.push_back(a);
    }
    a=v1[d-1]+v2[0];
    b=n-1;
    for(ll i=0;i<d-1;i++)
    {
        if(v1[i]+v2[b]<=a)
            {
                c++;
                b--;
            }

    }
    cout<<n-(c+n-d)<<endl;

}
