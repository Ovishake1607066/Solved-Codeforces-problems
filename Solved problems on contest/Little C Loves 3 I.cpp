#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if((n-2)%3==0)
    {
        cout<<1<<" "<<2<<" "<<n-3<<endl;
    }
    else
        cout<<1<<" "<<1<<" "<<n-2<<endl;
}
