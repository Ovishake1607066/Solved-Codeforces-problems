#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        //cout<<t<<endl;
        ll a,b,c,d,e=0;
        cin>>a>>b;

        if(a-b!=1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        c=a+b;
        d=sqrt(c);
        if(c%3==0 && c!=3)
            {
                cout<<"NO"<<endl;
                e=1;
            }
        else
        for(ll i=6;i-1<=d;i+=6)
        {
            if(c%(i+1)==0)
            {
                cout<<"NO"<<endl;
                e=1;
                break;
            }
            if(c%(i-1)==0)
            {
                cout<<"NO"<<endl;
                e=1;
                break;
            }
        }
        if(!e)
            cout<<"YES"<<endl;
    }
}
