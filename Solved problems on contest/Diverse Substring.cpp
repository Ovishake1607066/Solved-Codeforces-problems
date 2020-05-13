#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b;
    string s;
    cin>>n>>s;
    for(ll i=0;i<s.size()-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<"YES"<<endl;
            cout<<s[i]<<s[i+1]<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
