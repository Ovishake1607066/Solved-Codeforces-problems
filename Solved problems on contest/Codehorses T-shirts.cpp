#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[500],a1[500],a2[500],a3[500],a4[500],a5[500],a6[500],a7[500];
int main()
{
    ll n,b,c=0,d;
    string s;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>s;
        if(s.size()==1)
            for(ll j=0; j<s.size(); j++)
            {
                a[int(s[j])]++;
            }
        if(s.size()==2)
            for(ll j=0; j<s.size(); j++)
            {
                a1[int(s[j])]++;
            }
        if(s.size()==3)
            for(ll j=0; j<s.size(); j++)
            {
                a2[int(s[j])]++;
            }
        if(s.size()==4)
            for(ll j=0; j<s.size(); j++)
            {
                a3[int(s[j])]++;
            }
    }
    for(ll i=0; i<n; i++)
    {
        cin>>s;
        if(s.size()==1)
            for(ll j=0; j<s.size(); j++)
            {
                a4[int(s[j])]++;
            }
        if(s.size()==2)
            for(ll j=0; j<s.size(); j++)
            {
                a5[int(s[j])]++;
            }
        if(s.size()==3)
            for(ll j=0; j<s.size(); j++)
            {
                a6[int(s[j])]++;
            }
        if(s.size()==4)
            for(ll j=0; j<s.size(); j++)
            {
                a7[int(s[j])]++;
            }
    }
    for(ll i=60; i<130; i++)
    {
        if(a[i]!=a4[i])
            c+=(max(a[i],a4[i])-min(a[i],a4[i]));
        if(a1[i]!=a5[i])
            c+=(max(a1[i],a5[i])-min(a1[i],a5[i]));
        if(a2[i]!=a6[i])
            c+=(max(a2[i],a6[i])-min(a2[i],a6[i]));
        if(a3[i]!=a7[i])
            c+=(max(a3[i],a7[i])-min(a3[i],a7[i]));
    }
    cout<<c/2<<endl;
}
