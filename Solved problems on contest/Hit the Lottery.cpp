#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b,c=0,d,e;
    cin>>n;
    if(n/100)
    {
        c=c+(n/100);
        n=n%100;
    }
        if(n/20)
    {
        c=c+(n/20);
        n=n%20;
    }
        if(n/10)
    {
        c=c+(n/10);
        n=n%10;
    }
        if(n/5)
    {
        c=c+(n/5);
        n=n%5;
    }
        if(n)
    {
        c=c+(n/1);
    }
    cout<<c<<endl;

}
