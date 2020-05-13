#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,a=0,b=0,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        b=x+y;
        if(b>a)
            a=b;
    }
    cout<<a<<endl;

}
