#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a,b,c,d,e,s=0,f=1;
    for(ll i=0;i<n;i++)
    {
        s=0;
        cin>>a>>b>>c>>d;
        s=s+a+b+c+d;
        if(i==0)
        {
            e=s;
        }
        else
        {
            if(s>e)
                f++;
        }

    }
    cout<<f<<endl;
}
