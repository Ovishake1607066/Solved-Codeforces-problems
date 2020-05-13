#include<bits/stdc++.h>
#define ll long long int
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,s1,a,b,c,s=0;
    cin>>n>>s1;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    b=(n/2);
    if(v[b]<=s1)
    {
        for(ll i=b;i<n;i++)
        {
            //cout<<v[i]<<endl;
            if(v[i]<=s1)
                s=s+(s1-v[i]);
            else
                break;
        }
    }
    else
    {
        for(ll i=b;i>=0;i--)
        {
            if(v[i]>=s1)
                s=s+(v[i]-s1);
            else
                break;
        }
    }
    cout<<s<<endl;
}
