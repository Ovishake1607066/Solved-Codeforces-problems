#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    set<ll>s;
    ll n,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a!=0)
            s.insert(a);
    }
    cout<<s.size()<<endl;
}

