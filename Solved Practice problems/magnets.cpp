#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s1,s2;
    ll n,a,c=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>s1;
        if(s1==s2)
            continue;
        else
        {
            c++;
            s2=s1;
        }
    }
    cout<<c<<endl;
}
