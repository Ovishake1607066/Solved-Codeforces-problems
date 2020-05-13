#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll a=0,b=0,c,d,e;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='o')
            a++;
        else
            b++;
    }
    if(a==0)
        cout<<"YES"<<endl;
    else if(b==0)
        cout<<"YES"<<endl;
    else if(b%a==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
