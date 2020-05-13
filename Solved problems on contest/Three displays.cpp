#include<bits/stdc++.h>
#define ll long long
#define d double
ll sum=100000000000000000;
using namespace std;
int main()
{
    ll n,b=0,c;
    cin>>n;
    ll a1[n],a2[n];
    for(ll i=0;i<n;i++)
        cin>>a1[i];
    for(ll i=0;i<n;i++)
        cin>>a2[i];
    for(ll i=0;i<n-2;i++)
    {
        for(ll j=i+1;j<n-1;j++)
        {
            if(a1[j]<=a1[i])
                continue;
            for(ll k=j+1;k<n;k++)
            {
                if(a1[k]<=a1[j])
                    continue;
                //cout<<i<<j<<k;
                if(a2[i]+a2[j]+a2[k]<sum)
                    sum=a2[i]+a2[j]+a2[k];
                    b=1;
                //cout<<"       "<<sum<<endl;
            }
        }
    }
    if(b==1)
        cout<<sum<<endl;
    else
    cout<<-1<<endl;

}
