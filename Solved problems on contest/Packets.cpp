#include<bits/stdc++.h>
#define ll long long int
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,a=1,c=0;
    cin>>n;
    while(1)
    {
        c++;
        a=a*2;
        if(a>n)
            break;
    }
    cout<<c<<endl;
}
