#include<bits/stdc++.h>
#define ll long long
using namespace std;
class c
{
public:
    ll a,b;
}c1[1000000];
bool ValueCmp(c const & a1, c const & b1)
{
    return a1.a < b1.a;
}
int main()
{
    ll n,c,d,e,f,g;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cin>>c;
        if(c<i)
            c1[i].a=i;
        else if(c>n)
            {
                if(c%n<i)
                    c1[i].a=i+n*(c/n);
                else
                    c1[i].a=i+n*(c/n)+n;
            }
        else
            c1[i].a=n+i;
        c1[i].b=i;
    }
    sort(c1+1,c1+n+1, ValueCmp);
    cout<<c1[1].b<<endl;
}
