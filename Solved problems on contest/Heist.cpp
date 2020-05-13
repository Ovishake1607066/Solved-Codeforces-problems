#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,b,c=0,d;
    cin>>n;
    ll a[n];
    loop
    {
        cin>>a[i];
    }
    sort(a,a+n);
    b=a[0];
    d=a[n-1];
    c=d-b+1;
    cout<<c-n<<endl;
}
