#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,s,d,e;
    cin>>a>>b;
    s=a;
    while(a/b)
    {
        c=a%b;
        d=a/b;
        a=d+c;
        s=s+d;
    }
    cout<<s<<endl;
}
