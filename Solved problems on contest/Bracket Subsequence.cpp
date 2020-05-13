#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,k,a,b,c,d;
    string s;
    cin>>n>>k;
    cin>>s;
    a=n-k;
    b=0;
    c=a/2;
    d=a/2;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='(' && d>0)
        {
            b++;
            d--;
            continue;
        }
        if(s[i]==')' && b>0 && c>0)
        {
            b--;
            c--;
            continue;
        }
        cout<<s[i];
    }
}
