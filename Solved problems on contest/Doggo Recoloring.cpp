#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
ll a[1000];
int main()
{
    ll n,b,c;
    char cc;
    //cout<<int('z')<<endl;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>cc;
        a[int(cc)]++;
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(ll i=97;i<130;i++)
    {
        if(a[i]>1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
