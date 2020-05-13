#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,a,c;
    cin>>m>>n>>a;
    if(m%a==0)
        c=m/a;
    else
        c=(m/a)+1;
    if(n%a==0)
        c=c*(n/a);
    else
        c=c*((n/a)+1);
    cout<<c<<endl;
}
