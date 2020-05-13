#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a=0,b=0,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='A')
            a++;
        else
            b++;
    }
    if(a>b)
        cout<<"Anton"<<endl;
    else if(a<b)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
}
