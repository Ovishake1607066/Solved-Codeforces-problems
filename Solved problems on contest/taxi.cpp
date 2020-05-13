#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b,c1=0,c2=0,c3=0,d=0,s=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        if(a==4)
            s++;
        else if(a==3)
            c3++;
        else if(a==2)
            c2++;
        else
            c1++;
    }
    if(c3>=c1)
        s+=c3;
    else
        {
            s+=c3;
            d=c1-c3;
        }
    if(c2%2==0)
        s+=(c2/2);
    else
    {
        s+=(c2/2);
        d+=2;
    }
    if(d%4==0)
        s+=(d/4);
    else
        s+=(d/4)+1;
    cout<<s<<endl;

}
