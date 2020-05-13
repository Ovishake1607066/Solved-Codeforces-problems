#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<a;i++)
#define loop2 for(ll j=0;j<m;j++)
using namespace std;
int main()
{
    ll n,m,a,b,c;
    cin>>n>>m;
    a=n/5+226;
    b=0;
    loop
    {
        if(i==a-1)
            cout<<5;
        else if(i==a-2)
            cout<<5;
        else
            {
                if(b==0)
                {
                    cout<<5;
                    b=1;
                }
                else
                {
                    cout<<4;
                    b=0;
                }
            }

    }
    cout<<endl;
    b=0;
    loop
    {
        if(i==a-1)
            cout<<5;
        else if(i==a-2)
            cout<<4;
        else
            {
                if(b==0)
                {
                    cout<<4;
                    b=1;
                }
                else
                {
                    cout<<5;
                    b=0;
                }
            }
    }
    cout<<endl;
}
