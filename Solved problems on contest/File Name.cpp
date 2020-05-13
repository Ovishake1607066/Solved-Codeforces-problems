#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b=0,c=0,d=0;
    cin>>n;
    string s;
    cin>>s;
    b=0;
    for(ll i=0;i<s.size();i++)
    {
        //cout<<s[i]<<endl;
        if(s[i]=='x')
            {
                c++;
                b=1;
            }
        if(s[i]!='x' && b==1)
            {
                if(c>2)
                    d=d+c-2;
                c=0;
                b=0;
            }
    }
    if(c>2)
        d=d+c-2;
    if(d==0)
        cout<<0<<endl;
    else
        cout<<d<<endl;
}
