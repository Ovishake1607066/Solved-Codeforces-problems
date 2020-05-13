#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll l,r,a,b,c;
    cin>>l>>r;
    a=((r-l)+1)/2;
    if(a<1)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(ll i=l;i<=r;i+=2)
            cout<<i<<" "<<i+1<<endl;
    }
}
