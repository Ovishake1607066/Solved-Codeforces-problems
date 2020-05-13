#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,k,l,a,b;
    cin>>n>>m>>k>>l;
    a=(k+l);
    if(a%m==0)
        b=a/m;
    else
        b=a/m+1;
    ll x=b*m;
    if(x>n)
    cout<<-1<<endl;
    else
        cout<<b<<endl;
}
