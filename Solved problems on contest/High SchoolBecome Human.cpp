#include<bits/stdc++.h>
#define ll long long
#define d double
using namespace std;
int main()
{
    d x,y;
    d a,b;
    cin>>x>>y;
    a=y*log10(x);
    b=x*log10(y);
    //cout<<a<<b<<endl;
    if(a==b || x==y)
        cout<<'='<<endl;
    else if(a>b)
        cout<<'>'<<endl;
    else
        cout<<'<'<<endl;
}
