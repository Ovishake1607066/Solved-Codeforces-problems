#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    ll a,b,c1=0,c2=0;
    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]<='z' && s[i]>='a')
            c1++;
        else
            c2++;
    }
    if(c1>=c2)
    {
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]=s[i]+32;
        }
    }
    else
    {
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                s[i]=s[i]-32;
        }
    }
    cout<<s<<endl;
}
