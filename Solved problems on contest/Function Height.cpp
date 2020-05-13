#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,k,a,b;
    cin>>n>>k;
    if(k%n==0)
        cout<<k/n<<endl;
    else
        cout<<k/n+1<<endl;
}
