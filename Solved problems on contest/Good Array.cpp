#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
ll m[10000000];
int main()
{
    ll n;
    cin>>n;
    ll a[n+10],b,c,d,f,e,s=0,mm=0;
    vector<ll>v;
    loop
    {
        cin>>a[i];
        m[a[i]]++;
        mm=max(mm,a[i]);
        s+=a[i];
    }
    loop
    {
        b=s-a[i];
        if(b%2==0)
        {
            c=b/2;
            if(c<=mm)
            {
                m[a[i]]--;
                if(m[c])
                {
                    v.push_back(i+1);
                }
                m[a[i]]++;
            }
        }
    }
    cout<<v.size()<<endl;
    if(v.size())
    {
        for(ll i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
    }
}
