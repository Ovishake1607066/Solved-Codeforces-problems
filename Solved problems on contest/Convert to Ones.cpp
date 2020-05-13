#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    ll c=0,d=0,e,f,s1=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0'&& d==0)
        {
            c++;
            d=1;
            //cout<<s[i]<<endl;
        }
        else if(s[i]=='0')
            d=1;
        else
            d=0;
    }
    //cout<<c<<endl;
    if(c==1)
    {
        cout<<y<<endl;
        return 0;
    }
    else if(c==0)
        {
            cout<<0<<endl;
            return 0;
        }
    else if(y==0)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        if(y>x)
        {
            for(ll i=1;i<c;i++)
            {
                s1=s1+x;
            }
            s1=s1+y;
        }
        else
        {
            s1=s1+c*y;
        }
    }
    cout<<s1<<endl;
}
