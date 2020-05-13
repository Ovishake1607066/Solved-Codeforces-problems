#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
ll a[1000];
using namespace std;
int main()
{
    ll n,k,b;
    char c;
    string s;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>c;
        //cout<<(int)c<<endl;
        a[(int)c]++;
    }
    b=a[65];
    //cout<<b<<endl;
    for(ll i=65;i<k+65;i++)
    {
        b=min(b,a[i]);
    }
    cout<<b*k<<endl;
}
