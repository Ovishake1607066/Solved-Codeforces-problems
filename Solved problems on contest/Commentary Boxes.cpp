#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,a,b,c,d,e;
    cin>>n>>m>>a>>b;
    c=n%m;
    if(c==0)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        if(c*b>(m-c)*a)
            cout<<(m-c)*a<<endl;
        else
            cout<<c*b<<endl;
    }
}
