#include<bits/stdc++.h>
using namespace std;
#define ll long
int main()
{
    ll k,n,s,p,a,b,c;
    cin>>k>>n>>s>>p;
    for(ll i=1; ;i++)
    {
        if(s*i>=n)
        {
            a=i;
            break;
        }
    }
    for(ll i=1; ;i++)
    {
        if((p*i)/k>=a)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}
