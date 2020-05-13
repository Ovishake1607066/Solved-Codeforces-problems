#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll t,a,b,k,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        c=ceil(k/2.0);
        cout<<c*a-((k/2)*b)<<endl;
    }
}
